#include<iostream>
#include "Treenode.h"
using namespace std;

int getLargeNodeCount(Treenode<int>* root, int x) {
    int count = 0;
    if(root->data > x){
        count++;
    }

    for(int i = 0 ; i<root->children.size() ; i++){
        count += getLargeNodeCount(root->children[i] , x);
    }
    
}