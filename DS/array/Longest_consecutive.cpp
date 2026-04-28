class Solution {
    public:

    // function for linear search 
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