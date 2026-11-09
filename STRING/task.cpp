#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin , s);
    for(char &ch : s){
        ch = tolower(ch);
         
     }

     for(int i=0; i<s.size(); i++){
        if(s[i]=='a' || s[i] =='e' || s[i] == 'i' || s[i] =='o' || s[i] == 'u' ||s[i] == 'y'){
            s.erase(i, 1);
            i--;
        } 
     }

     
    for(int i=0; i<s.size() ; i++){
        cout << "." << s[i];
    }
     

      
     
}

//delete all vowel
//put . before consunant
// all consunant should be lower case