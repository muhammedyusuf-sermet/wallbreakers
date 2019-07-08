class Solution {
public:
    #define BOARDSIZE 9
    
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> columns(9);
        vector<unordered_set<char>> squares(9);
        
        int squareIndex = 0, i=0, j=0;
        for(i=0; i<BOARDSIZE; i++){
            for(j=0; j<BOARDSIZE; j++){
                if(board[i][j] == '.'){
                    continue;
                }
                squareIndex = ((j/3))+((i/3)*3);
                // Add cell to respective sets
                if (rows[i].count(board[i][j]) != 0 || columns[j].count(board[i][j]) != 0 || squares[squareIndex].count(board[i][j]) != 0 ) {
                    return false;
                }
                rows[i].insert(board[i][j]);
                columns[j].insert(board[i][j]);
                squares[squareIndex].insert(board[i][j]);
            }
        }
        
        return true;
    }
};