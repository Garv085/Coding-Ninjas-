#include<iostream>
#include "Treenode.h"
#include <queue>
using namespace std;

Treenode<int>* maxSumNode(Treenode<int> *root){
    queue<Treenode<int>*> pending_nodes;
    pending_nodes.push(root);
    Treenode<int>* ans = root;
    int sum = root->data;
    int max = INT_MIN;
    while(pending_nodes.size() != 0){
        Treenode<int>* front = pending_nodes.front();
        pending_nodes.pop();
        
        for(int i = 0 ; i<front->children.size() ; i++){
            sum = sum + front->children[i]->data;
        }

        if(sum>max){
        max = sum;
        ans = front;
        }

        for(int i = 0 ; i<front->children.size() ; i++){
            pending_nodes.push(front->children[i]);
        }
    }
    return ans;
}