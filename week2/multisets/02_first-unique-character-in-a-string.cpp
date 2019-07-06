class Solution {
public:
    int firstUniqChar(string s) {
        // we can assume it's all lowercase letters
        vector<int> freq(26,0);
        for(char& letter: s){
            freq[(int)letter-97]++;
        }
        
        for(int i=0; i<s.size(); i++){
            if(freq[(int)s[i]-97] == 1){
                return i;
            }
        }
        return -1;        

        // I tried coming up with an efficient solution with Multisets as suggested.
        // But honestly, above solution is more intuitive for me.
//         unordered_multiset<char> multisetOfLetters;
//         for(char& letter: s){
//             multisetOfLetters.insert(letter);
//         }
        
//         for(int i=0; i<s.size(); i++){
//             if(multisetOfLetters.count(s[i]) == 1){
//                 return i;
//             }
//         }
//         return -1;
    }
};