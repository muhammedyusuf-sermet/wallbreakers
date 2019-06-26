class Solution {
public:
    int titleToNumber(string s) {        
        uint8_t lap = 26;
        int colNumber = 0;
        
        uint8_t sub_length = s.length()-1;
        int num = 0;
        for(char& c : s) {
            num = (int)c - 64;
            colNumber += calcPadding(lap, sub_length);
            colNumber += (num-1)*calcPadding(lap,sub_length);
            sub_length--;
        }
        
        return colNumber;
    }
    
    int calcPadding(uint8_t lap, uint8_t length){
        int padding = pow(lap, length);
        return padding;
    }
};