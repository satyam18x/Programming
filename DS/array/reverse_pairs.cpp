//Brute force - TC-o(n^2) , SC- O(1)  
//Time limit exceeded

class Solution {
public:
    int reversePairs(vector<int>& nums) {

        int n=nums.size();

        int count=0;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                 
                 if(nums[i]>2LL * nums[j])
                 count ++;
            }
        }
        return count;
    }
};