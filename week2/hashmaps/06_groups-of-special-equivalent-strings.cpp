class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        unordered_set<string> groups;
        vector<string> wordRearranged(2);
        for(string& word: A){
            for(uint8_t i=0; i<word.size(); i++){
                wordRearranged[i%2] += word[i];
            }
            sort(wordRearranged[0].begin(), wordRearranged[0].end());
            sort(wordRearranged[1].begin(), wordRearranged[1].end());
            
            // Concatanate two sorted chunks, and add to set
            groups.insert(wordRearranged[0]+wordRearranged[1]);

            // Reset our temporary variable for the new word in vector A
            wordRearranged[0] = "";
            wordRearranged[1] = "";
        }
        
        return groups.size();
    }
};