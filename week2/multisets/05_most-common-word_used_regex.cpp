class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int> freq;
        unordered_set<string> bannedSet;
        
        for(int i = 0; i < banned.size(); i++){
            bannedSet.insert(banned[i]);
        }
        
        // convert paragraph to lowercase
        std::transform(paragraph.begin(), paragraph.end(), paragraph.begin(),
            [](unsigned char c){ return std::tolower(c); });
        
        // split into words
        std::regex words_regex("[^\\s!?',;.]+");
        auto words_begin = std::sregex_iterator(paragraph.begin(), paragraph.end(), words_regex);
        auto words_end = std::sregex_iterator();
        
        for (std::sregex_iterator i = words_begin; i != words_end; ++i){
            // std::cout << (*i).str() << '\n';
            if(!bannedSet.count((*i).str())){
                freq[(*i).str()]++;   
            }
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