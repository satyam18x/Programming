//using linear search - O(N)
class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int n=nums.size();
        int mini = nums[0];
        for(int i=1;i<n;i++){
             mini = min(mini,nums[i]);
        }
         return mini;
    }
};

//NOW USING BINARY SEARCH - O(log n)
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int ans=INT_MAX;;

        while(low<=high){
            int mid=(low+high)/2;
                                   
            if(nums[low]<=nums[mid]){                 //left half is sorted, and then eliminate that half after storing the minimun in ans
  
               ans=min(ans,nums[low]); 
                low=mid+1;
            }
            else{                                    //right half is sorted  
                high = mid-1;
                ans=min(ans,nums[mid]);
            }

        }
        return ans;
    }
};
//