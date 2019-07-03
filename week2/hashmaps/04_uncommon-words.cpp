class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        vector<string> result;
        unordered_map<string, uint8_t> freqTable;
        string buffer;
        stringstream sstream(A+" "+B); 
        
        while (sstream >> buffer){
            if(freqTable.count(buffer)){
                freqTable[buffer] = 0;
            }
            else{
                freqTable[buffer]++;
            }
        }
        
        for(auto& word: freqTable){
            if(word.second == 1){
                result.push_back(word.first);
            }
        }
        
        return result;

    }
};