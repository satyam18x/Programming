//Time complexity: O(n) because we visit each node exactly once. 
//Space complexity: O(h) where h is the height of the tree. In the worst case (skewed tree), h can be n, making the space complexity O(n).
class Solution {
public:
    bool isMirror(TreeNode* left, TreeNode* right){
        if(left==NULL && right==NULL)
        return true;

        if(left==NULL || right==NULL)
        return false;

        if(left->val != right->val)
        return false;

        return isMirror(left->left,right->right) && isMirror(left->right,right->left);
    }

    bool isSymmetric(TreeNode* root) {
        
        if(root==NULL) return false;
        return isMirror(root->left,root->right);

    }
};