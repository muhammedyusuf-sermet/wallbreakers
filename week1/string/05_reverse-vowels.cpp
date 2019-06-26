class Solution {
public:
    string reverseVowels(string s) {
        int begin = 0;
        int end = s.size()-1;
        char eV, lV; // EarlyVowel, LateVowel
        while(begin<end){
            eV = tolower(s[begin++]);
            if (isVowel(eV)){
                while(begin<=end){
                    lV = tolower(s[end--]);
                    if (isVowel(lV)){
                        swap(s, begin-1, end+1);
                        break;
                    }
                }
            }
        }
        return s;
    }
    
    bool isVowel(char eV){
        if ((eV == 'a')|| (eV == 'e')|| (eV == 'i')|| (eV == 'o')|| (eV == 'u')){
            return true;
        }
        else{
            return false;
        }
    }
    
    void swap(string& s, int eVIndex, int lVIndex){
        char swap = s[eVIndex];
        s[eVIndex] = s[lVIndex];
        s[lVIndex] = swap;
    }
};