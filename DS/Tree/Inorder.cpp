//Recursive
class Solution {
public:
    void inorder(TreeNode* root, vector <int>& ans){
        if(root==nullptr){
            return;
        }

        inorder(root->left,ans);
        ans.push_back(root->val);
         inorder(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorder(root,ans);
        return ans;

    }
};
//Iterative
class Solution {
public:
   
    vector<int> inorderTraversal(TreeNode* root) {
       stack <TreeNode*> st;
       TreeNode *node = root;
        vector <int> inorder;
       
       while(true){
           if(node!=NULL){
            st.push(node);
            node = node->left;
           }
           else{
               if (st.empty()==true) break;
               node=st.top();
               st.pop();
               inorder.push_back(node->val);
               node = node->right;
           }
       }
       return inorder;
    }
};