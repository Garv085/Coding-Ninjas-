#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout<<v[0]<<endl;
    v[0] = 100;
    cout<<v[0]<<endl;
}