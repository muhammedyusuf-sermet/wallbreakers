class Solution {
public:
    bool isAnagram(string s, string t) {
        // Though it performs worse than hashmap,
        // we were asked to solve this with sorting
        
        if(s.size() != t.size()){
            return false;
        }
        
        sort(t.begin(), t.end());
        sort(s.begin(), s.end());
        
        return s==t;
    }
};