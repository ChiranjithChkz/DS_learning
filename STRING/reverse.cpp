#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    //using reverse function :
    reverse(s.begin(), s.end());

    // using two pointer:
    int left = 0;
    int right = s.size()-1;

    while(left < right){
        swap(left, right);
        left++;
        right--;
    }

    cout << s ;
}