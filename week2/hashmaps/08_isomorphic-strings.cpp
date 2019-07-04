class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> isoMap;
        vector<bool> mappedChars(256, false);
        
        for(int i=0; i<s.size(); i++){
            if(!isoMap.count(s[i])){
                if(mappedChars[(int)t[i]]){
                    return false;
                }
                mappedChars[(int)t[i]] = true;
                isoMap[s[i]] = t[i];
            }
            else if(isoMap[s[i]] != t[i]){
                return false;
            }
        }
        
        return true;
    }
};