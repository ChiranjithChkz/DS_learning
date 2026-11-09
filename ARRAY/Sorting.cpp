#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    
    int arr[n] = {4,5,2,3,1};

    //sort in accending order
    //sort(arr, arr+n);
 

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // for vector 
    vector<int > v = {4,5,67,2,3};

    //sort in accending order
    //sort(v.begin(), v.end());

    // sort in decending order
    //sort(v.rbegin(), v.rend());

    //Reverse array
    reverse(v.begin(), v.end());

    


    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    
}