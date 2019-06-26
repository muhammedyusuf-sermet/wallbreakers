class Solution {
public:
   
    vector<int> sortArrayByParity(vector<int>& A) {
        // assuming vector is non-empty
        int begin = 0;
        int end = A.size()-1;
        char eV, lV; // Even, Odd
        while(begin<end){
            eV = A[begin++];
            if (eV % 2){
                while(begin<=end){
                    lV = A[end--];
                    if (!(lV % 2)){
                        swap(A, begin-1, end+1);
                        break;
                    }
                }
            }
        }
        return A;
    }
    
    void swap(vector<int>& A, int eVIndex, int lVIndex){
        int swap = A[eVIndex];
        A[eVIndex] = A[lVIndex];
        A[lVIndex] = swap;
    }
};