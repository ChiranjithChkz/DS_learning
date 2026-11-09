#include<bits/stdc++.h>
using namespace std;

//check vowels 

bool isVowels(char c){
    return c =='a' || c == 'e' || c == 'i' || c =='o' || c == 'u' || c == 'y' ;
}

int main(){
    int n;
    cin >> n;

    string s;
    for(int i=0; i<n; i++){
        char c;
        cin >> c;
        s += c;
    }

    int ans =0;
    bool hasVowels = false;
    bool hasConsonents = false;

    for(char c : s){
        if(isVowels(c)){
            hasVowels = true;
        }else{
            hasConsonents = true;
        }

        if(hasVowels && hasConsonents){
            ans++;
            hasVowels = false;
            hasConsonents = false;
        }
    }

    cout << ans << endl;


}

/**
 * 1. input string 
 * 2. create a function to check vowels
 * 3. if vowel && consunent ans++
 * 4. if not 0
 */