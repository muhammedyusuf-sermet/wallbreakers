class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> freq;
        
        // Question asks us to assume there will
        // always be the different character
        // So, skipping edge cases

        int i;
        for(i=0; i<s.size(); i++){
            freq[s[i]]++; 
            freq[t[i]]--;  
        }
        freq[t[i]]--;
        
        for(auto& letter: freq){
            if(letter.second != 0){
                return letter.first;
            }
        }
        
        // we are assured this won't happen
        return '0';
    }
};