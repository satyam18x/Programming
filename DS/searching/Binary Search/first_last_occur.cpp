//Using linear search O(N)
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

          int n=nums.size();
          int first=-1;
          int last = -1;

        for(int i=0;i<n;i++){
            if(nums[i]==target)
            {
                if(first==-1)
                   first=i;


                    last=i;
            }
       }
       
        return {first,last};
        
    }
};

//Now using binary search
class Solution {
public:
       
    int lowerBound(vector<int>& nums, int target) {

        int n=nums.size();

     int low=0;
     int high = n-1;
     int ans = n;

     while(low<=high){
        int mid=(low+high)/2;

        if(nums[mid]>=target){
            ans=mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
     }
     return ans;
}

