#include<iostream>
#include "Treenode.h"
using namespace std;

int getLeafNodeCount(Treenode<int>* root) {
    if(root->children.size() == 0){
        return 1;
    }

    for(int i = 0 ; i<root->children.size() ; i++){
        getLeafNodeCount(root->children[i]);
    }
    
}