//Recursive Postorder Traversal
class Solution {
public:
    void postorder(TreeNode* root, vector <int>& ans){
        if(root==nullptr){
            return;
        }

        postorder(root->left,ans);
        postorder(root->right,ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postorder(root,ans);
        return ans;

    }
};
//Iterative using 2 stack
class Solution {
public:
   
    vector<int> postorderTraversal(TreeNode* root) {
       
       vector <int> postorder;
       if(root==NULL) return postorder;
       stack <TreeNode*> st1,st2;
       st1.push(root);

       while(!st1.empty()){
        TreeNode *node = st1.top();
        st1.pop();
        st2.push(node);
        if(node->left!=NULL) st1.push(node->left);
        if(node->right!=NULL) st1.push(node->right);
       } 

       while(!st2.empty()){
        postorder.push_back(st2.top()->val);
        st2.pop();
       }
       return postorder; 
    }
};