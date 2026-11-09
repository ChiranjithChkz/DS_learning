 #include<bits/stdc++.h>
using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();

    //O(n*n)
    // for(int i=0; i<n; i++){
    //     for(int j= i+1; j<n; j++){
    //         if(nums[i] + nums[j] == target){
    //             ans.push_back(i);
    //             ans.push_back(j);

    //             return ans;
    //         }
    //     }
    // }

    //optimise  

    int i=0, j= n-1;

    while(i < j){

        int pairSum = nums[i] + nums[j];

        int maxSum = max(maxSum, pairSum);
    

        // if(pairSum > target)
        // {
        //     j--;
        // }else if(pairSum < target)
        // {
        //     i++;
        // }
        // else{
        //     ans.push_back(i);
        //     ans.push_back(j);

        //     return ans;
        // }


    }


    return ans;

}

int main(){
   vector<int> nums= {1,2,3,4,4,5};
   int target = 9;

   vector<int> pair = pairSum(nums, target);

   cout << pair[0] << "," << pair[1] << endl;
   return 0;

}