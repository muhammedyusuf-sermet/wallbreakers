class Solution {
public:
    void reverseString(vector<char>& s) {
        int length = s.size();
        char swap;
        for(int i=0; i<floor(length/2); i++){
            swap = s[i];
            s[i] = s[length-1-i];
            s[length-1-i] = swap;
        }
    }
};