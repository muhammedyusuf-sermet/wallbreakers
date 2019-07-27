/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int longestUnivaluePath(TreeNode* root) {
        int longestUnivaluePath = 0;
        
        getDepth(root, longestUnivaluePath);
        
        return longestUnivaluePath;
    }

    int getDepth(TreeNode* node, int& longestUnivaluePath){
        if(!node){
            return 0;
        }
        
        int left = getDepth(node->left, longestUnivaluePath);
        int right = getDepth(node->right, longestUnivaluePath);
        
        // the child is either a different value, or null
        if(!node->left || node->left->val != node->val){
            left = 0;
        }
        
        if(!node->right || node->right->val != node->val){
            right = 0;
        }
        
        longestUnivaluePath = max(longestUnivaluePath, left+right);
        
        return max(left,right)+1;
    }
};