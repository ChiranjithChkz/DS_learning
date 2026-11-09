#include<bits/stdc++.h>
using namespace std;
int main(){
    //declare
    vector<int> v ={10, 20};

    // add element;
    v.push_back(10);

    // Remove from list
    v.pop_back();

    //print size
    cout << v.size() << endl;

    //clear
    v.clear();

    //check empty
    v.empty();

    //show output
    for(int i=0;i < v.size(); i++){
        cout << v[i] << " ";
    }
}