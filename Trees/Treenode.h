#include <iostream>
#include <vector>
using namespace std;
template <typename T>

class Treenode{
    public:

    T data;
    vector <Treenode*> children;

    Treenode(int data){
        this -> data = data;
    }

    ~Treenode(){
        for(int i = 0 ; i<root->children.size() ; i++){
            delete children[i];
        }
    }
};