#include<bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    getline(cin , s);

    for(char &c : s){
        c = tolower(c);
    }

    string result = "";
    for(char &c: s){
        if(isalpha(c)){
            result+=c;
        }
    }

    string rev = result;
    reverse(rev.begin(), rev.end());

    if(result == rev){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }



    
    // upper case to lower case
    // other non latter things delete
    // delete space 
     //A man, a plan, a canal: Panama

    
}