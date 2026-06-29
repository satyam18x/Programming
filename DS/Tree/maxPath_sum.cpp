//Tc-O(n)
class Solution {
public:
    int sum=0;
    int maxi = INT_MIN;
    int summ(TreeNode* root){
     if(root==NULL) return 0;
     
     
     int lh = max(0,summ(root->left));
     int rh = max(0,summ(root->right));
     
     sum = lh+rh+root->val;
     maxi = max(maxi,sum);

     return max(lh,rh)+root->val;

    }
    int maxPathSum(TreeNode* root) {
        
        summ(root);
        return maxi;

    }
};