#include<iostream>
#include "Treenode.h"
using namespace std;

void printatlevelk(Treenode<int>* root , int k){
    if(k == 0){
        cout << root -> data; 
    }
     
    for(int i = 0 ; i<root->children.size() ; i++){
        printatlevelk(root , k-1);
    }
}