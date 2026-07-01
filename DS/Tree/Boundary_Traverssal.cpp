class Solution {
  public:
    bool isLeaf(Node* root){
        if(root->left==NULL && root->right==NULL){
            return true;
        }
        else
           return false;
    }
    void addLeftboundary(Node* root, vector<int>& res){
        Node* cur = root->left;
        
       while(cur){ 
        if(!isLeaf(cur)) res.push_back(cur->data);
        if(cur->left){
            cur = cur->left;
        }
        else {
            cur = cur->right;
        }
       }
    }
 