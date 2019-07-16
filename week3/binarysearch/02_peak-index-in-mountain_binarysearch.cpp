class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {     
        // Assuming that A is a mountain.
        // And assuming A is not empty
        
        int start = 0, end = A.size()-1, middle;
        
        // O(logN)
        while(start<end){
            middle = (start+end)/2;
            if(A[middle] < A[middle+1]){
                start = middle+1; // index
            }
            else{
                end = middle;
            }
        }

        return start;
    }
};