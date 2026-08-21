//TC- o(n) * O(n) = O(n^2)
class Solution {
  public:
  
  bool ls(vector<int>& arr, int x){
      for(int i=0;i<arr.size();i++){
          if(arr[i]==x)
          return true;
      }
      return false;
  }
    int longestConsecutive(vector<int>& arr) {
        
        int n=arr.size();
        int longest = 0;
        
        
        for(int i=0;i<n;i++){
          int  x=arr[i];
           int count = 1;
            
            while(ls(arr,x+1)==true){
                x++;
                count++;
            }
            longest=max(longest,count);
        }
        
       return longest; 
    }
};

    //better solution -- TC = O(n log n)+o(n)

  class Solution {
public:
     int longestConsecutive(vector<int>& nums) {
     if(nums.size()==0) return 0;
      sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=0;
        int lastSmaller=INT_MIN;
        int longest=0;

        for(int i=0;i<n;i++){
            if(nums[i]-1==lastSmaller){
                count+=1;
                lastSmaller=nums[i];
            }
            else if (lastSmaller!=nums[i]){
                count=1;
                lastSmaller=nums[i];
             }
             longest=max(longest,count);
        }

        return longest;
      
    }
};

//optimal solution  - TC = o(n) 
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        int longest = 0;

        for(auto num : st) {
            // check if it's the start of a sequence
            if(st.find(num - 1) == st.end()) {
                int currentNum = num;
                int count = 1;

                // expand the sequence
                while(st.find(currentNum + 1) != st.end()) {
                    currentNum++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};