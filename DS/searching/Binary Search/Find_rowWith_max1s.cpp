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
//using Binary search
