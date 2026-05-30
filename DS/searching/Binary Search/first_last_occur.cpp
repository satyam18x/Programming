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

    int upperBound(vector<int>& nums, int target) {

        int n=nums.size();

     int low=0;
     int high = n-1;
     int ans = n;

     while(low<=high){
        int mid=(low+high)/2;

        if(nums[mid]>target){
            ans=mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
     }
     return ans;
}    

    vector<int> searchRange(vector<int>& nums, int target) {

        int n=nums.size();

        int lb=lowerBound(nums,target);
        if(lb==n || nums[lb]!=target)
         return {-1,-1};
        else
         return {lb,upperBound(nums,target)-1};  
        
    }
};


//Now using COmplete Binary search , without using upper and lower bound

class Solution {
public:
       
    int firstOccurence(vector<int>& nums, int target) {

        int n=nums.size();

     int low=0;
     int high = n-1;
     int first = -1;;

     while(low<=high){
        int mid=(low+high)/2;

        if(nums[mid]==target){
            first = mid;
            high = mid-1;
        }
        else if(nums[mid]>target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
     }
     return first;
}

class Solution {
public:
       
    int firstOccurence(vector<int>& nums, int target) {

        int n=nums.size();

     int low=0;
     int high = n-1;
     int first = -1;;

     while(low<=high){
        int mid=(low+high)/2;

        if(nums[mid]==target){
            first = mid;
            high = mid-1;
        }
        else if(nums[mid]>target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
     }
     return first;
}

    int lastOccurence(vector<int>& nums, int target) {

        int n=nums.size();

     int low=0;
     int high = n-1;
     int last=-1;

     while(low<=high){
        int mid=(low+high)/2;

        if(nums[mid]==target){
            last=mid;
            low=mid+1;
        }
        else if(nums[mid]>target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
     }
     return last;
}    

    vector<int> searchRange(vector<int>& nums, int target) {

        int n=nums.size();

        int first= firstOccurence(nums,target);
        int last=lastOccurence(nums,target);
        return {first,last};

       
    }
};