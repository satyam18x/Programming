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
        vector <int> preorder;
        if(root==NULL) return preorder;

        stack <TreeNode*> st;
        st.push(root);

        while(!st.empty()){
            TreeNode *node = st.top();
            st.pop();

            preorder.push_back(node->val);
            if(node->right!=NULL) st.push(node->right);
            if(node->left!=NULL) st.push(node->left);
           


        }
        return preorder;

    }
};
