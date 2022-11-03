#include <iostream>
#include <queue>
using namespace std;
#include "Treenode.h"


void print_tree(Treenode<int> * root){
    if(root == NULL){
        return;
    }

    cout<< root -> data << ':';
    for(int i = 0; i < root->children.size() ; i++){
        cout << root->children[i]->data << "," ;
    }

    cout << endl;

    for(int i = 0 ; i < root->children.size() ; i++){
        print_tree(root->children[i]);
    }

}

void printTree_levelwise(Treenode<int>* root){
    queue<Treenode<int>*> pending_nodes;
    pending_nodes.push(root);
    while(pending_nodes.size() != 0){
        Treenode<int>* front = pending_nodes.front();
        pending_nodes.pop();
        cout << front->data << ":";
        for(int i = 0 ; i<front->children.size() ; i++){
            cout << front->children[i]->data << ",";
        }
        cout << endl;
        for(int i = 0 ; i<front->children.size() ; i++){
            pending_nodes.push(front->children[i]);

        }
        
    }
}

Treenode<int>* takeinputlevelwise(){
    int rootData;
    cout << "Enter Root Data" << endl;
    cin >> rootData;

    queue<Treenode<int>*> pendingnodes;
    Treenode<int>* root = new Treenode<int>(rootData);
    pendingnodes.push(root);

    while(pendingnodes.size() != 0){
        Treenode<int>* front = pendingnodes.front();
        pendingnodes.pop();

        cout << "No. of children of" << front->data << endl;
        int num;
        cin >> num;

        for (int i = 0 ; i<num ; i++){
            int childData;
            cout << i << "th child's data" << endl;
            cin >> childData;
            Treenode<int>* child = new Treenode<int>(childData);
            front->children.push_back(child);
            pendingnodes.push(child);
        }
    }

    return root;
}

Treenode<int>* takeinput(){
    int rootData;
    cout << "Enter Data" << endl;
    cin >> rootData;
    Treenode<int>* root = new Treenode<int>(rootData);

    int n;
    cout << "No. of children of root" << endl;
    cin>>n;

    for(int i = 0 ; i<n ; i++){
        Treenode<int>* child = takeinput();
        root->children.push_back(child);
    }

    return root;
}


int main(){

    /*Treenode<int>* root = new Treenode<int>(1);
    Treenode<int>* node1 = new Treenode<int>(2);
    Treenode<int>* node2 = new Treenode<int>(3);
    root -> children.push_back(node1);
    root -> children.push_back(node2);*/
    Treenode<int>* root = takeinputlevelwise();
    printTree_levelwise(root);
    delete root;

}