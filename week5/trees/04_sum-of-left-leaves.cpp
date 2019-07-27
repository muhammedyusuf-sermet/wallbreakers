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
    int sumOfLeftLeaves(TreeNode* root) {
        int totalSum=0;
        
        findLeafs(root, totalSum, false);
        
        return totalSum;
    }

    void findLeafs(TreeNode* node, int& totalSum, bool isLeftNode){
        if(!node){
            return;
        }
        
        if(!node->left && !node->right && isLeftNode){
            // it's a left leaf!
            totalSum += node->val;
            return;
        }   
        
        findLeafs(node->left, totalSum, true);
        findLeafs(node->right, totalSum, false);
    }
};