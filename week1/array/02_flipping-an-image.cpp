class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i=0; i<A.size(); i++){
            reverse(A[i].begin(), A[i].end());
            
            for(int&  pixel: A[i]) {
                pixel = !pixel;
            }
        }
        return A;
    }
};