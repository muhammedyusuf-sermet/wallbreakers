class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        
        string prefix = strs[0];
        for(int i=1; i<strs.size(); i++){
            LCPBetweenTwoWords(prefix, prefix,strs[i]);
            if(prefix.empty()){
                return prefix;
            }
        }
        return prefix;
    }
    
    void LCPBetweenTwoWords(string& prefix, string str1, string str2){
        prefix = "";
        for(int i=0; i<str1.size(); i++){
            if(i < str2.size() && str1[i] == str2[i]){
                prefix += str1[i];
            }
            else{
                break;
            }
        }
      
    }
};