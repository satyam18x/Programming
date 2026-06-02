//Using linear search - O(n) , and SC - O(1)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n=nums.size();
      

        if(n==1)
        return nums[0];
        
        for(int i=0;i<n;i++){
            if(i==0){
                if(nums[i]!=nums[i+1])
                return nums[i];
            }
           else if(i==n-1){
                if(nums[i]!=nums[i-1])
                return nums[i];
            }

            else{
               if(nums[i]!=nums[i+1] && nums[i]!=nums[i-1])
               return nums[i];
            }
        }
        return -1;
    }
};
//now using binary search in O(log n)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

       int n=nums.size();
       
       if(n==1) return nums[0];                     //if there is only one element in array, return that elem
       if(nums[0]!=nums[1]) return nums[0];         //if first element don't have next element equal to it ,then it is that single element , so return it
       if(nums[n-1]!=nums[n-2]) return nums[n-1];   // same with the last eleement , if it doesnt have its  previous elem equal to it , return it
     
       int low = 1;
       int high = n-1;

       while(low<=high){
        int mid=(low+high)/2;

        if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])     //if mid doesnt have previous and next element equal to it , it is the single element   
          return nums[mid];
    

       if((mid%2==1 && nums[mid] == nums[mid-1])                  
              || (mid % 2 == 0 && nums[mid]==nums[mid+1]))
          {
               low=mid+1;
          }
          else{
            high = mid-1;
          }
       }
         return -1; 
         
    }
};      