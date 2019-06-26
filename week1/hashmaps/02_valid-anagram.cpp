class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        
        unordered_map<char, int> hist;

        for(int i=0; i<s.size(); i++){
            hist[s[i]] = 0;
            hist[t[i]] = 0;
        }
        
        for(int i=0; i<s.size(); i++){
            hist[s[i]]++;
            hist[t[i]]--;
        }

        for(std::unordered_map<char, int>::iterator it = hist.begin(); it != hist.end(); ++it)
        {
            if(it->second != 0){
                return false;
            }
        }

        return true;
    }
};