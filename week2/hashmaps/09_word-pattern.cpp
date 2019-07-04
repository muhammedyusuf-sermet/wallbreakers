class Solution {
public:
    bool wordPattern(string pattern, string str) {
        string buffer;
        stringstream sstream(str);
        
        unordered_map<char, string> patternMap;
        unordered_set<string> mappedWords;
        
        int i = 0;
        while (sstream >> buffer){
            if(i>=pattern.size()){
                return false; // not the same length, cannot match the pattern
            }

            if(!patternMap.count(pattern[i])){
                if(mappedWords.count(buffer)){
                    return false;
                }
                mappedWords.insert(buffer);
                patternMap[pattern[i]] = buffer;
            }
            else if(patternMap[pattern[i]] != buffer){
                return false;
            }
            
            i++;
        }
        if(i<pattern.size()){
            return false;
        }
        
        return true;
    }
};