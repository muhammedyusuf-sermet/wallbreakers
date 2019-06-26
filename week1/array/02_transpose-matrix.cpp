class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        //it's 3am in the morning, not the best code...
        
        vector<vector<int>> transpose;
        
        vector<int> column;
        for(int j=0; j<A[0].size(); j++){
            for(int i=0; i<A.size(); i++){
                column.push_back(A[i][j]);
            }
            transpose.push_back(column);
            column.clear();
        }
        
        return transpose;
        
    }
};