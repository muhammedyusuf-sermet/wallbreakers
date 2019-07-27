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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leafSequence1, leafSequence2;
        
        findLeafs(root1, leafSequence1);
        findLeafs(root2, leafSequence2);
        
        int leafSeqSize1 = leafSequence1.size(), 
            leafSeqSize2 = leafSequence2.size();
        
        if(leafSeqSize1 != leafSeqSize2){ return false; }
        
        for(int i=0; i<leafSeqSize1; i++){
            if(leafSequence1[i] != leafSequence2[i]){
                return false;
            }
        }
        
        return true;
    }
    
    void findLeafs(TreeNode* node, vector<int>& leafSequence){
        if(!node){
            return;
        }
        
        if(!node->left && !node->right){
            // it's a leaf!
            leafSequence.push_back(node->val);
            return;
        }   
        
        findLeafs(node->left, leafSequence);
        findLeafs(node->right, leafSequence);
    }
};