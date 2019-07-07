class Solution {  

public:
    // I have benefited from online resources for this question for learning
    // Will work on optimization
    
    
    string result = "";
    
    // Alphabet size (# of symbols) 
    #define ALPHABET_SIZE (26) 

    // Converts key current character into index 
    // use only 'a' through 'z' and lower case 
    #define CHAR_TO_INDEX(c) ((int)c - (int)'a')
  
    struct TrieNode 
    { 
        struct TrieNode *children[ALPHABET_SIZE]; 

        // isLeaf is true if the node represents 
        // end of a word 
        bool isLeaf; 
    };

    struct TrieNode *getNode(void) 
    { 
        struct TrieNode *pNode = new TrieNode; 
            pNode->isLeaf = false; 

        for (int i = 0; i < ALPHABET_SIZE; i++) 
            pNode->children[i] = NULL;     

        return pNode; 
    } 

    void insert(struct TrieNode *root, string word) 
    { 
        int length = word.size(); 

        struct TrieNode *pCrawl = root; 

        for (int level = 0; level < length; level++) 
        { 
            int index = CHAR_TO_INDEX(word[level]); 
            if (!pCrawl->children[index]) 
                pCrawl->children[index] = getNode(); 

            pCrawl = pCrawl->children[index]; 
        } 

        // mark last node as leaf 
        pCrawl->isLeaf = true; 
    }  
    
    void findLongestWord(struct TrieNode* node, string path) {
        
        if(node==NULL || node->isLeaf == false) {
            if(path.size()>0){ // to prevent bad memory access in case of misusage of this function
                path.pop_back();
            }
            
            if(path.size()>result.size()){
                result=path;
            }
            else if(path.size()==result.size()&&result>path){
                result=path;
            }
            return;
        }
        for(int i=0;i<26;i++) {
            path.append(1, 'a'+i);
            findLongestWord(node->children[i], path);
            path.pop_back();
        }
    }
    
    string longestWord(vector<string>& words) {
        struct TrieNode *root = getNode(); 
        root->isLeaf = true;

        // Construct Trie 
        for (int i = 0; i < words.size(); i++) {
            insert(root, words[i]); 
        }

        findLongestWord(root, "");
        
        return result;
    }
};