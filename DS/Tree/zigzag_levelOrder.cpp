//TC -O(n), SC-O(n)
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;

        queue<TreeNode*> que;
        que.push(root);

        bool lefttoRight = true; 

        while(!que.empty()){
            int size = que.size();
            vector<int> level(size);
            
            for(int i=0;i<size;i++){
                TreeNode *node = que.front();
                que.pop();

                int index = lefttoRight ? i : size-1-i;
                level[index] = node->val;  
                if(node->left!=NULL) que.push(node->left);
                if(node->right!=NULL) que.push(node->right);
                
            }
            lefttoRight=!lefttoRight;
            result.push_back(level);
        }
         return result;
    }
};