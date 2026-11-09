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

    for(char c : s){
        c = tolower(c);
    }

    for(char c : s){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c=='u' || c == 'y')
        {
            vowels++;
        }else{
            consunents++;
        }
    }

    cout << vowels << consunents <<  endl;
    
 
}