//brute force - O(n*m)
class Solution {
  public:   
  int rowWithMax1s(vector < vector < int >> & mat) {
       int n=mat.size();
       int maxcount=0;
       int ans=-1;

         for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                   if(mat[i][j]==1)
                   count++;
            }
            if(count>maxcount){
            maxcount=count;
            ans=i;
         }
         }
         
            return ans;
  }
};
//using Binary search  - O(n * log m)
class Solution {
public:
    int rowWithMax1s(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();

        int ans = -1;
        int maxOnes = 0;

        for (int i = 0; i < n; i++) {
            int firstOne = lower_bound(mat[i].begin(), mat[i].end(), 1) - mat[i].begin();
            int ones = m - firstOne;

            if (ones > maxOnes) {
                maxOnes = ones;
                ans = i;
            }
        }

        return ans;
    }
};