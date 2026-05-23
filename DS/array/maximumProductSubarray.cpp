//Bruteforce - TC O(n^3) and sc - O(1)

class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n=nums.size();
        int productmax =INT_MIN;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int product=1;
                for(int k=i;k<=j;k++){
                    
                    product = product*nums[k];
                }
                productmax = max (productmax,product);
            }
        }
        return productmax;
    }
};

//Better TC-O(n^2)
