class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {     
        // Assuming that A is a mountain.
        // And assuming A is not empty
        
        int index = 0;
        for(int i=1; i<A.size(); i++){
            if(A[index]<A[i]){
                index = i;
            }
            else{
                break;
            }
        }
        return index;
    }
};