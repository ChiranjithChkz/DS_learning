#include<bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    getline(cin , s);

    int count =0;

    for(int i=0; i<s.size(); i++){
        int left = i;
        int right = i;

        ///i = center

        while(left >= 0 && right < s.size() && s[left] == s[right])
        {
            count++;

            left--;
            right++;

        }
    }
    for(int i=0; i<s.size()-1; i++){
        int left = i;
        int right = i+1;

        ///i = center

        while(left >= 0 && right < s.size() && s[left] == s[right])
        {
            count++;

            left--;
            right++;

        }
    }

    cout << count << endl;

 

    
}