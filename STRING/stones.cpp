#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    for(int i=0; i<n; i++){
        char c;
        cin >> c;
        s += c;
    }
    for(char &c : s){
        c = tolower(c);
    }

    int same = 0;

    for(int i=0; i<s.size(); i++){
        if(s[i] == s[i+1]){
            same++;
        }
    }

    cout << same << endl;
}

 
// if two or more same latter are besides then output neigbers-1;