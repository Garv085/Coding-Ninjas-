#include<iostream>
#include "Treenode.h"
using namespace std;

void gethieght(Treenode<int>* root , int hieght , int *max){
    if(*max < hieght){
        *max = hieght; 
    }
    for(int i = 0 ; i < root->children.size() ; i++ ){
        gethieght(root , hieght+1 , max);

    }
}

int hieghtoftree(Treenode<int>* root){

    if (root == NULL){
        return 0;
    }
    int hieght = 1;
    int max = 1;
    gethieght(root , hieght , &max);
    return max;
}