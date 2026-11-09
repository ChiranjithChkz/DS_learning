 #include<bits/stdc++.h>
using namespace std;

//kadane's algorithm
int maxSubArray(vector<int> & nums){
    int currSum = 0;
    int maxSum = INT_MIN;

    for(int x : nums){
        currSum += x;
        maxSum = max(maxSum, currSum);


        if(currSum < 0)   {
            currSum = 0;
        }
         
   }
   return maxSum;

}

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

   cout <<  maxSubArray(nums);
   return 0;

}