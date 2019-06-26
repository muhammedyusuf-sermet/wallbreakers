class Solution {
public:
    int binaryGap(int N) {
        int count = 0;
        int maxCount = 0;
        uint8_t firstSetFound = 0;
        uint8_t setFound = 0;
        while (N) 
        { 
            setFound = N & 1;
            N >>= 1;
            
            if(firstSetFound){
                count++;
            }
            
            if(setFound){
                firstSetFound = setFound;
                if(maxCount<count){
                    maxCount = count;
                }
                count = 0;
            }
        }
        return maxCount;
    }
};