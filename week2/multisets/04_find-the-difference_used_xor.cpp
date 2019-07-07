class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = '\0';
        int i=0;
        for(i=0; i<s.size(); i++) {
            result ^= s[i];
            result ^= t[i];
        }
        result ^= t[i];
        
        return result;
    }
};