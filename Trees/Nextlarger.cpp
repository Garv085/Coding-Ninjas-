#include<iostream>
#include "Treenode.h"
using namespace std;

Treenode<int>* getNextLargerElement(Treenode<int>* root, int x) {
    Treenode<int>* ans = root;
    if(root->data > x){
        return ans;
    }

    for(int i = 0 ; i<root->children.size() ; i++){
        Treenode<int>* smallans = getNextLargerElement(root->children[i] , x);
        if(root->data >= smallans->data){
            ans = smallans;
        }

    }
    return ans;

}