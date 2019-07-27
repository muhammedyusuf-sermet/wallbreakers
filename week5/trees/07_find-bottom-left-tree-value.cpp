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
    int findBottomLeftValue(TreeNode* root) {
        // we are given that root will not be NULL
        int leftmostLeaf=root->val,
            leftmostLeafLevel=0;
        
        findLeftmostLeaf(root, leftmostLeaf, leftmostLeafLevel, 0);
        
        return leftmostLeaf;
    }
    
    // Depth-first
    void findLeftmostLeaf(TreeNode* node, int& leftmostLeaf, int& leftmostLeafLevel, int level){
        if(!node){
            return;
        }
        
        // Update leftmostLeaf only if we found a deeper node
        // Do not update leftmostLeaf for other nodes in the same depth,
        // thus assuring we'll always get the deepest leftmost.
        if(leftmostLeafLevel<level){
            leftmostLeaf = node->val;
            leftmostLeafLevel = level;
        }
        
        findLeftmostLeaf(node->left, leftmostLeaf, leftmostLeafLevel, level+1);
        findLeftmostLeaf(node->right, leftmostLeaf, leftmostLeafLevel, level+1);
    }
};