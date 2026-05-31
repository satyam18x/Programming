//SEARCH IN ROTATED SORTED ARRAY
//this can be done using linear search also in O(n) simply , 
// we are using binary search to optimize it mor ein O(log n)

class Solution {
public:
    int search(vector<int>& nums, int target) {


        int n=nums.size();
        int low=0;
        int high=n-1;

        while(low<=high){
            int mid=(low+high)/2;

            if(nums[mid]==target){                  //if found at mid, return mid
                return mid;
            }

            if(nums[low] <= nums[mid]){                                 //checking if either left side is sorted or

                 if(nums[low]<=target && target <= nums[mid]){
                    high = mid-1;                                    //Right half is eliminated ,
                 }
                 else{
                    low=mid+1;
                 }

            }
            else{                                                     //right half is sorted
                if(nums[high] >= target && target >= nums[mid]){
                    low=mid+1;
                 }                                                     //left half is eliminated
                 else{
                    high=mid-1;
                 }
            }

        }
        return -1;
    }
};
 
