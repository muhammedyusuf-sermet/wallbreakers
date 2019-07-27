/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> postorderTraversal;
        if(root){
            getPostorder(root, postorderTraversal);
            postorderTraversal.push_back(root->val);
        }
        
        return postorderTraversal;
    }
    
    void getPostorder(Node* root, vector<int>& postorderTraversal){
        if(!root){
            return;
        }
        for(int i=0; i<root->children.size(); i++){
            getPostorder(root->children[i], postorderTraversal);
            postorderTraversal.push_back(root->children[i]->val);
        }
    }
};