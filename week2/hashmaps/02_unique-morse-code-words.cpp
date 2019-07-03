class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> transformations;
        
        vector<string> transTable = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        string transformed = "";
        for(string& word: words){
            transformed = "";
            for(char& letter: word){
                transformed += transTable[(int)letter-97];
            }
            transformations.insert(transformed);
        }
        return transformations.size();
    }
};