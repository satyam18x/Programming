class Solution {
  public:
    bool isLeaf(Node* root){
        if(root->left==NULL && root->right==NULL){
            return true;
        }
        else
           return false;
    }
