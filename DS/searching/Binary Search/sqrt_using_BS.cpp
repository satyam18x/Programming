//using linear search
class Solution {
public:
    int floorSqrt(int n)  {
      
       int ans=1;
       for(int i=1;i<=n;i++){
        
        if(i*i<=n){
            ans=i;
        }
        else 
            break;
       }
       return ans;
    }
};

//using binary search
class Solution {
public:
    int floorSqrt(int n)  {
      
       int low=1 , high =n;
       int ans=1;

       while(low<=high){
        long long mid=(low+high)/2;
        long long val=mid*mid;

        if(val<=n){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
       }
       return ans;
     
    }
};