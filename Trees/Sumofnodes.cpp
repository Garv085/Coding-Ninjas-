#include<iostream>
#include "Treenode.h"
using namespace std;

int sumofnodes(Treenode<int>* root){
    int ans = root->data;
    for(int i = 0 ; i<root->children.size() ; i++){
        ans += sumofnodes(root->children[i]);
    }

    return ans;
}