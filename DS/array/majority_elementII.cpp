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

//Better solution no.1 = TC- O(n) + o(n log n)  and SC- o(n)
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

//we can reduce two iteration to only one iteration which will be better solution no. 2 
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

//optimal solution
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n = nums.size();

        int cnt1 = 0, cnt2 = 0;
        int el1 = INT_MIN, el2 = INT_MIN;

        // step 1 - Finding majority elements
        for(int i = 0; i < n; i++) {

            if(cnt1 == 0 && nums[i] != el2) {
                cnt1 = 1;
                el1 = nums[i];
            }

            else if(cnt2 == 0 && nums[i] != el1) {
                cnt2 = 1;
                el2 = nums[i];
            }

            else if(nums[i] == el1) {
                cnt1++;
            }

            else if(nums[i] == el2) {
                cnt2++;
            }

            else {
                cnt1--;
                cnt2--;
            }
        }

        // Step 2 - Check if candidates actually appear more than n/3 times
        cnt1 = 0;
        cnt2 = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] == el1) cnt1++;
            else if(nums[i] == el2) cnt2++;
        }

        vector<int> ans;

        if(cnt1 > n / 3) ans.push_back(el1);
        if(cnt2 > n / 3) ans.push_back(el2);

        return ans;
    }
};