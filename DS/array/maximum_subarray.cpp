//brute force approach  - TC-> O(N^3)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n=nums.size();

        int maxi=INT_MIN;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int sum=0;
                for(int k=i;k<=j;k++)
                {
                    sum+=nums[k];
                }
                 maxi=max(sum , maxi); 
            }  
        }
         return maxi;
        
    }
};

//better approach  - TC-> O(N^2)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n=nums.size();

        int maxi=INT_MIN;

        for(int i=0;i<n;i++){
             int sum=0;
            for(int j=i;j<n;j++)
               
                {
                    sum+=nums[j];
                     maxi=max(sum , maxi);
                }
                 
             
        }
         return maxi;
        
    }
};

//optimal - TC -> O(N)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n=nums.size();

        int maxi=INT_MIN;
        int sum=0;

        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxi=max(sum,maxi);

            if(sum<0){
                sum=0;
            }
             
        }
         return maxi;
        
    }
};
//