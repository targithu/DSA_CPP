// Given the root of a Binary Search Tree and a target number k, return true if there exist two elements in the BST such that their
// sum is equal to the given target.

// Example 1:
// Input: root = [5,3,6,2,4,null,7], k = 9
// Output: true

class Solution {
public:
    void inorder(TreeNode* root,vector<int> &in){
        if(root==NULL) return ;
        inorder(root->left,in);
        in.push_back(root->val);
        inorder(root->right,in);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>in;
        inorder(root,in);
        int i=0,j=in.size()-1;
        while(i<j){
            int sum=in[i]+in[j];
            if(sum==k)
             return true;  
            else if(sum>k)
                j--;
            else
                i++;       
        }
        return false;
    }
};
