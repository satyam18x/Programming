//brute force
class Solution {
public:
    int CanSplit(vector<int> &arr, int maxsum){
        int parts=1;
        long long current=0;

        for(int i=0;i<arr.size();i++){
            if(current+arr[i]<=maxsum)
               {
                current+=arr[i];
               }
            else{
                parts++;
                current=arr[i];
            }   
        }
        return parts;

    }
    int splitArray(vector<int> &nums, int k)  {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);

        for(int maxsum=low;maxsum<=high;maxsum++){
            if(CanSplit(nums,maxsum)<=k)
            return maxsum;
        }
        return -1;
    }
};

//using binary search
