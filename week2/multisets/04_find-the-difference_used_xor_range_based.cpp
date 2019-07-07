class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = '\0';

        for(char& letter: s) {
            result ^= letter;
        }
        
        for(char& letter: t) {
            result ^= letter;
        }
        
        return result;
    }
};