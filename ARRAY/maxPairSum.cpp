 #include<bits/stdc++.h>
using namespace std;

//kadane's algorithm
int maxSubArray(vector<int> nums, int k ){
    int currSum = 0;
    int maxSum = INT_MIN;

    int n = nums.size();

    for(int i=0; i<k; i++){
        for(int j = k; j<n; j++)
        {
            currSum = nums[i] + nums[j];
            maxSum = max(maxSum, currSum);

            if(maxSum > currSum){
                return maxSum;
            }

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

   //cout <<  maxSubArray(nums);
   return 0;

}