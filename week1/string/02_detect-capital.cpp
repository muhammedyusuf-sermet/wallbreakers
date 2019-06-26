class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size()<=1){
            return true;
        }
        
        bool reference = isupper(word[1]);
        
        if(islower(word[0])){
            reference = 0;
        }
        for(uint8_t i=1; i<word.size(); i++){
            if((bool)isupper(word[i]) != reference){  
                return false;
            }
        }
        return true;
    }
};