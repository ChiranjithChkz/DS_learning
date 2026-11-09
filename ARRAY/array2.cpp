#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int t;
        cin >> t;

        int m = sqrt(t);
        if(t==1){
            cout << "No" << endl;
        }
        else if(t==2){
            cout << "Yes" << endl;
        }
        else if( m * m == t){
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }

    }
}