class Solution {
public:
    int findComplement(int num) {
        int bitCount = log2(num) + 1; 

        // Inverting the bits one by one 
        int index=0, factor=0;
        while(index<bitCount){
            factor = 1 << index++; // use this to XOR each bit
            num = num ^ factor;
        }
        
        return num;
    }
};