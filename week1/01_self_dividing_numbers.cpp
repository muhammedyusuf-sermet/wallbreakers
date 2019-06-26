class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> output;
        while(left <= right){
            if(IsSelfDividingNumber(left)){
                output.push_back(left);
            }
            left++;
        }
        return output;
    }
    
    bool IsSelfDividingNumber(int number) {
        int factor = 1;
        int currentDigit;
        while(number >= factor){
            currentDigit = (number/factor)%10;
            if(currentDigit == 0 || number%currentDigit != 0){
                return false;
            }
            factor *= 10;
        }
        return true;
    }
};