#include<iostream>
#include "Treenode.h"
using namespace std;

void postorder(Treenode<int>* root){
    if(root == NULL){
        return ;
    }

    for(int i= 0 ; i<root->children.size() ; i++){
        postorder(root->children[i]);
    }

    cout << root->data << " ";
}