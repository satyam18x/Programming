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

    //better solution

    class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;

        for (int num : s) {
            // start only if it's the beginning of sequence
            if (s.find(num - 1) == s.end()) {
                int currentNum = num;
                int count = 1;

                while (s.find(currentNum + 1) != s.end()) {
                    currentNum++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};