class Solution {
public:
    int hammingDistance(int x, int y) {
        // I have benefited from geeksforgeeks.org for this question.
        // https://www.geeksforgeeks.org/count-set-bits-in-an-integer/
        // Nice chance to brush up on bitwise operators.
        x = x^y;
        int hammingDist = 0;
        while (x) 
        { 
            hammingDist += x & 1; 
            x >>= 1; 
        }
        return hammingDist;
    }
};