//TC-O(n)
class Solution {
public:

    int countt(TreeNode* root){
        if(root==NULL) return 0;

       int lh = countt(root->left);
       int rh = countt(root->right);

       return 1+lh+rh;
    }

    int countNodes(TreeNode* root) {
      
    return countt(root);
    
    }
};