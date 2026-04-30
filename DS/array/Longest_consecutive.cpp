class Solution {
    public:

    // function for linear search        == TC -> O(N^2)
        bool linearSearch(vector<int>& nums, int target) {
            for (int num : nums) {
                if (num == target) return true;
            }
            return false;
        }
    
        int longestConsecutive(vector<int>& nums) {
            int longest = 0;
            int n = nums.size();
    
            for (int i = 0; i < n; i++) {
                int x = nums[i];
                int count = 1;
    
                                       // only start if it is the beginning of sequence if previous number is not present
                if (!linearSearch(nums, x - 1)) {
                    while (linearSearch(nums, x + 1)) {
                        x = x + 1;
                        count = count + 1;
                    }
                    longest = max(longest, count);
                }
            }
    
            return longest;
        }
    };

    //better solution -- TC = O(n log n)+o(n)

  class Solution {
public:
     int longestConsecutive(vector<int>& nums) {
     if(nums.size()==0) return 0;
      sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=0;
        int lastSmaller=INT_MIN;
        int longest=0;

        for(int i=0;i<n;i++){
            if(nums[i]-1==lastSmaller){
                count+=1;
                lastSmaller=nums[i];
            }
            else if (lastSmaller!=nums[i]){
                count=1;
                lastSmaller=nums[i];
             }
             longest=max(longest,count);
        }

        return longest;
      
    }
};

//optimal solution  - TC = o(n) 
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        int longest = 0;

        for(auto num : st) {
            // check if it's the start of a sequence
            if(st.find(num - 1) == st.end()) {
                int currentNum = num;
                int count = 1;

                // expand the sequence
                while(st.find(currentNum + 1) != st.end()) {
                    currentNum++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};