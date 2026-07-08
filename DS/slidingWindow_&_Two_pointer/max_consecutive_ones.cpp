//tc-O(n^2)
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();

        int maxlen = 0;

        for(int i=0;i<n;i++){
            int zeroes = 0;
          for(int j=i;j<n;j++)  {
            
            if(nums[j]==0)
              zeroes++;

            if(zeroes <= k){
                int len = j-i+1;
                maxlen = max(len,maxlen);
            }
            else break; 
          }
        }
        return maxlen;
    }
};
// sliding window - O(n)
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxlen = 0;
        int zeroes = 0;
        int l=0,r=0;
        
        while(r<n){
            if(nums[r]==0) 
              zeroes++;

            while(zeroes > k) {
                if(nums[l]==0)
                zeroes--;
               l++; 
            }

           int len=r-l+1;
             maxlen = max(maxlen,len); 
             r++;
            
        }
        return maxlen;
    }
};