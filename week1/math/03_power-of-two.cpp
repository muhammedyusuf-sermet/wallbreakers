class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0){
            return false;            
        }
        
        double log2n = log2(n);
        if(log2n == floor(log2n)){
            return true;
        }
        else{
            return false;
        }

    }
};