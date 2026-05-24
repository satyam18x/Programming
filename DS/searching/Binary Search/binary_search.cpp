//Iterative code 
class Solution {
public:
    int search(vector<int>& nums, int target) {
       
        int n=nums.size();
        int low = 0;
        int upper = n - 1;

        while (low <= upper) {

            int mid = (low + upper) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] > target) {
                upper = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return -1;
    }
};