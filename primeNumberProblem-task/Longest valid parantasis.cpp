#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int VP(string s){
      stack<int> st;
      st.push(-1);

      int maxlen = 0;

      for(int i=0; i<s.size(); i++){

        if(s[i] == '('){
            st.push(i);
        }else{

            st.pop();

            if(st.size() == 0){
                st.push(i);
            }else{
                maxlen = max(maxlen, i- st.top())
            }
        }
      }
      return maxlen;
        
    }
};

int main(){


}



// ()()() -> 6