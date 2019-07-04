class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> indices;
        int ssize = (int)s.size();
        int psize = (int)p.size();

        int loopLimit = ssize-psize+1;
        vector<int> histWindow(26,0); // Lowercase English letters only
        vector<int> histReference(26,0); // Lowercase English letters only
        
        if(ssize < psize){
            return indices;
        }
        
        for(int i=0; i<psize; i++){
            histWindow[((int)s[i])-97]++;
            histReference[((int)p[i])-97]++;
        }
        
        for(int i=0; i<loopLimit; i++){
            if(isAnagram(histWindow, histReference)){
                indices.push_back(i);
            }
            histWindow[((int)s[i])-97]--;
            if(i+psize<ssize){
                histWindow[((int)s[i+psize])-97]++;
            }
        }
        
        return indices;
    }
    
    bool isAnagram(vector<int>& s, vector<int>& t) {  
        for(int i=0; i<t.size(); i++){
            if(s[i] != t[i]){
                return false;
            }
        }
        return true;
    }
};