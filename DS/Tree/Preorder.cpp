//Recursive preorder traversal
class Solution {
public:
    
    void preorder(TreeNode* root,vector<int>& ans){
    if(root==nullptr){
        return;
    }
    ans.push_back(root->val);
    preorder(root->left, ans);
    preorder(root->right, ans);
   }

    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> ans;
        preorder(root,ans);
        return ans;
        

    }
};

//Iterative - using stack

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;

        if (root) st.push(root);

        while (!st.empty()) {
            TreeNode *curr = st.top();
            st.pop();

            ans.push_back(curr->val);

            if (curr->right) st.push(curr->right);
            if (curr->left)  st.push(curr->left);
        }

        return ans;
    }
};
