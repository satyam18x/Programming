//brute force
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n=nums.size();
      vector<int> ans;
        for(int i=0;i<n;i++){
            

          // this line will avoid duplicates
            if(ans.size() == 0 || ans[0] != nums[i]) {

                int count = 0;

                for(int j = 0; j < n; j++) {

                    if(nums[i] == nums[j]) {
                        count++;
                    }
                }

                if(count > n / 3) {
                    ans.push_back(nums[i]);
                }
            }
        }

        return ans;
    }
};

//Better solution no.1 = TC- O(N^2) + o(n log n)
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n=nums.size();
        vector <int> ans;
       
        map <int,int> mpp;

        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }


        for(auto it : mpp){
            if(it.second>n/3)
                ans.push_back(it.first);
            
        }
        return ans;
    }
};

//we can reduce complexity by removing two iteration to only one iteration which will be better solution no. 2 
//Tc - O(n)+O(n log n)

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n=nums.size();
        vector <int> ans;
       int mini=int ((n/3)+1);
        map <int,int> mpp;

        for(int i=0;i<n;i++){
             mpp[nums[i]]++;
             
             if(mpp[nums[i]]==mini){
                
                ans.push_back(nums[i]);
             }
        }
        return ans;
    }
};
