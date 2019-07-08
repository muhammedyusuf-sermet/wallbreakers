class Solution {
public:
    string frequencySort(string s) {
        multimap<int, char, greater <int> > mapDescending; 
        unordered_map<char, int> freq;
        string result = "";
        
        for(char& letter: s){
            freq[letter]++;
        }
        
        for(auto& pair: freq){
            mapDescending.insert(make_pair(pair.second, pair.first));
        }
        
        for(auto& pair: mapDescending){
            for(int i=0; i<pair.first; i++){
                result += pair.second;
            }
        }
        
        return result;       
        
    }
};