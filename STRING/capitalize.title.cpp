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

     

    for(int i=0; i<s.size(); i++){
        s[0] == toupper(s[0]);

        continue;

    }

    cout << s << endl;

}