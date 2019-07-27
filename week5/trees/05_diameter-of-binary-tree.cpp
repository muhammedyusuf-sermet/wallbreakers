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
    int diameterOfBinaryTree(TreeNode* root) {
        int longestDiam = 0;
        
        getDepth(root, longestDiam);
        
        return longestDiam;
        
    }
    
    int getDepth(TreeNode* node, int& longestDiam){
        if(!node){
            return 0;
        }
        
        int left = getDepth(node->left, longestDiam);
        int right = getDepth(node->right, longestDiam);
        
        longestDiam = max(longestDiam, left+right);
        
        return max(left,right)+1;
    }
};