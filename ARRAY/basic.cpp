#include<bits/stdc++.h>
using namespace std;
int main(){
    //static format
    int arr[5] = {1,2,3,4,5};
    // dynamic format-> use vector

    vector<int> arr = {1,2,3,4,5};

    // get input in array
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // show output
    for(int i=0; i<n ; i++){
        cout << arr[i] << " ";
    }

    // traversing throughtout array
    for(int i=0 ;i<n ; i++){
        cout << arr[i] << endl;
    }

    // Range base loop
    for(auto x : arr){
        cout << x << " ";
    }

    // we can access element through index
    // we can also update things

    

}