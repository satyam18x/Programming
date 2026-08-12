//Brute force
class Solution {
public:

    int smallestDivisor(vector<int>& nums, int threshold){
      
        int maxi = *max_element(nums.begin(),nums.end());                               
       
        int n=nums.size();

        for(int div=1;div<=maxi;div++){
             int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+ceil((double)(nums[i])/div);
        }
          if(sum<=threshold)
       return div;
        }
        return -1;
    } 
  
};

//optimal using binary search
class Solution {
public:

    int sumofD(vector<int>& arr, int div){

        int sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            sum=sum+ceil((double)(arr[i])/div);
        }
       return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high = *max_element(nums.begin(),nums.end());

            while(low<=high){
                int mid=(low+high)/2;
                
                if(sumofD(nums,mid)<=threshold){
                    high = mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            return low;
        
    }
};