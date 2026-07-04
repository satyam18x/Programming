//Tc- O(n) recursive
class Solution {
public:
    void left(TreeNode* root, int level, vector<int>& res) {
        if (root == NULL) return;

        
        if (level == res.size()) // If this is the first node at this level
            res.push_back(root->val);

        // Visit left subtree first
        left(root->left, level + 1, res);

        // Then visit right subtree
        left(root->right, level + 1, res);
    }

    vector<int> leftView(TreeNode* root) {
        vector<int> res;
        left(root, 0, res);
        return res;
    }
};