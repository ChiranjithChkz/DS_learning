 #include<bits/stdc++.h>
using namespace std;


int minSubArray(vector<int> & nums){
    int currSum = 0;
    int minSum = INT_MAX;

    for(int x : nums){
        currSum += x;
        minSum = min(minSum, currSum);


        if(currSum < 0)   {
            currSum = 0;
        }
         
   }
   return minSum;

}

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

   cout <<  minSubArray(nums);
   return 0;

}