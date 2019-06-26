class Solution {
public:
    void reverseAWord(string& s, int beginPadding, int endPadding){
        reverse(s.begin()+beginPadding,s.begin()+endPadding);
    }
    
    string reverseWords(string s) {
        int begin = 0;
        for(int i=0; i<s.size(); i++){
            if((bool)isspace(s[i])){
                reverseAWord(s, begin, i);
                begin = i+1;
            }
        }
        reverseAWord(s, begin, s.size());
        return s;
    }
};