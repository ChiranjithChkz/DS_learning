#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin , s);

    int upper=0, lower=0;

     for(char c: s){
        if(c==tolower(c)){
            lower++;
        }else{
            upper++;
        }
     }

     if(upper > lower){
        for(char &c : s){
            c = toupper(c);
           
        }
        cout << s << endl;
        
     }else{
        for(char &c : s){
            c = tolower(c);
        }
        cout << s << endl;
     }

     




}

// count upper case and lower case
// if upper > lower then all are upper
// otherwise lower