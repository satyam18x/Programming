//brute force         -- Time complexity will be more O(n^3) + log as using set, space will be o(2*no.of triplets) exciding the time limit 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         int n=nums.size();
      
       set <vector <int>> st;                      //using set data structure for storing unique triplets only
       
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                  int  sum=nums[i]+nums[j]+nums[k];

                    if(sum==0)  //checking if sum is zero
                    {       

                        vector <int> temp = {nums[i],nums[j],nums[k]};        //checking if the triplets are unique or not, so first sort them and storing them in set data structure which will store only unique triplets
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
            
        }
         vector < vector<int>> ans (st.begin(),st.end()) ;
         return ans;
    }
    
};

//better solution -  TC - O(n^2) but still using set and hashmap exciding the time limit
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         int n=nums.size();
      
       set <vector <int>> st;

        for(int i=0;i<n;i++){
             set<int> hashset;
            for(int j=i+1;j<n;j++){                        //we are not using the third loop reducing tc from n cube to n square
                     int third = -(nums[i]+nums[j]);            //instead we are using third variable 
                        if(hashset.find(third)!=hashset.end()){
                        vector <int> temp = {nums[i],nums[j],third};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                        hashset.insert(nums[j]);
                    }
                }
         vector < vector<int>> ans (st.begin(),st.end()) ;
         return ans;
    }
    
};