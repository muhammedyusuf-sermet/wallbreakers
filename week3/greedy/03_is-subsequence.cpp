class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0; // index of string s
        for(char& letter: t){
            if(letter == s[i]){
                i++;
            }
        }
        
        if(i == s.size()){
            return true;
        }
        return false;
    }
};