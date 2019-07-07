class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int> freq;
        unordered_set<string> bannedSet;
        
        for(int i = 0; i < banned.size(); i++){
            bannedSet.insert(banned[i]);
        }
        
        string word = "";
        bool remainingWord = false; 
        for(int i = 0; i < paragraph.size(); i++){
            if(isalpha(paragraph[i]) == 0){
                if(word.size() != 0 && !bannedSet.count(word)){
                    freq[word]++;   
                }
                word = ""; // reset
                remainingWord = false;
            }
            else{
                paragraph[i] = tolower(paragraph[i]);
                word += paragraph[i];
                remainingWord = true;
            }
        }
        
        // Add the last word
        if(remainingWord && !bannedSet.count(word)){
            freq[word]++;   
        }
        
        int maxCount = 0;
        string commonWord = "";
        for(auto& wordFreq: freq){
            if(wordFreq.second > maxCount){
                commonWord = wordFreq.first;
                maxCount = wordFreq.second;
            }
        }
        
        
        
        return commonWord;
    }
};