//brute force - Tc-O(n^4)  and SC - O(no. of quads)
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n=nums.size();

        set <vector <int>> st;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
              for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
               
                long long sum = (long long) nums[i]+nums[j]+nums[k]+nums[l];
                
                if (sum==target){
                    
                    vector <int> temp = {nums[i],nums[j],nums[k],nums[l]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                }
               }
            }
        } 
        
         vector<vector<int>> ans(st.begin(),st.end());
        return ans;

    }
};

//Better solution - TC - O(n^3) + log (m) as using hashset  and Sc - O(n) + o(no.quads)*2


               