class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> freq(26,0); // Lowercase English letters only
        
        // Question asks us to assume there will
        // always be the different character
        // So, skipping edge cases
        char diff;
        
        int i;
        for(i=0; i<s.size(); i++){
            freq[((int)s[i])-97]++;  
            freq[((int)t[i])-97]--;  
        }
        freq[((int)t[i])-97]--;
        
        for(i=0; i<freq.size(); i++){
            if(freq[i] != 0){
                diff = i+97;
                break;
            }
        }
        
        return diff;
    }
};