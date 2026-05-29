//using Linear search
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int n=nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]>=target)
            return i;
        }
        return n;
        
    }
};
  
//using Binary Search TC-O(log n)
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

     int low=0;
     int high = nums.size()-1;

     while(low<=high){
        int mid=(low+high)/2;

        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            high = mid-1;
            
        }
        else{
            low = mid+1;
        }
     }
     return low;

    }
};