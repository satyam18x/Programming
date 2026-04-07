//this is the better approach for finding a missing number in an array which have distint values from a range between 0 to n

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {

//         int n=nums.size();

//        int hash[n+1] = {0};

//         for(int i =0;i<n;i++){
//             hash[nums[i]] = 1;
//         }
//         for(int i=0;i<=n;i++)
//             if(hash[i]==0)
//             return i;
        
//     }
// };