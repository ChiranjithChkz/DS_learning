#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
    cin >> n;

    string s;
      int vowels = 0, consunents = 0;
    for(int i=0 ; i<n ;i++){
        char c;
        cin >> c;

        s += c;

    }

    int Up = 0, Low =0;

    for(char c : s){
      
        if(isupper(c)){
            Up++;
        }else{
            Low++;
        }
    }

    cout << Up << " " << Low << endl;

    
}