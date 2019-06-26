class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        // I got help from an online resource 
        // for this question for a better efficieny and cleaner code.
        int noOfCycles = 0;
        // Same size as M (N in the problem description)
        vector<uint8_t> visited(M.size(),0);
        
        for(int i=0; i<M.size(); i++){
            if(!visited[i]){
                depthFirst(visited, i, M);
                noOfCycles++;
            }
        }
        return noOfCycles;
    }
    
    void depthFirst(vector<uint8_t>& visited, int index, vector<vector<int>>& M){
        for(int i=0; i<M.size(); i++){
            if(M[index][i] && !visited[i]){
                visited[i] = 1; // mark it as visited
                depthFirst(visited, i, M);
            }
        }
        
    }

};