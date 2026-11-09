#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    
  while(n--){
    char arr[110];
    cin >> arr;

    int t=0;
    for(int i=0; i< strlen(arr); i++){
        t++;
    }

    if(t>10){
        cout << arr[0] << t-2 << arr[strlen(arr)-1] << endl;
    }else{
        cout << arr << endl;
    }
    


    
}





}