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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // approach i took: travers both of them with same approach
        // then, compare the traversal
        
        vector<int> sequence1, sequence2;
        
        findLeafs(p, sequence1);
        findLeafs(q, sequence2);
        
        int seqSize1 = sequence1.size(), 
            seqSize2 = sequence2.size();
        
        if(seqSize1 != seqSize2){ return false; }
        
        for(int i=0; i<seqSize1; i++){
            if(sequence1[i] != sequence2[i]){
                return false;
            }
        }
        
        return true;
    }
    
    void findLeafs(TreeNode* node, vector<int>& leafSequence){
        if(!node){
            leafSequence.push_back(NULL);
            return;
        }
        
        findLeafs(node->left, leafSequence);
        findLeafs(node->right, leafSequence);
        leafSequence.push_back(node->val);
    }
};