class Solution {
public:
    void solve(vector<vector<char>>& board) {
        // Studied the algorithm and approach for this question online
        if(board.empty()){ 
            return;
        }
        
        int height = board.size(); //m
        int width = board[0].size(); //n
        
        // Replace all O's
        for(int i=0; i<height; i++){
            for(int j=0; j<width; j++){
                if(board[i][j] == 'O'){
                    board[i][j] = '-';
                }
            }
        }
        
        // Fill the non-surroundered regions starting from border cells
        for (int i=0; i<height; i++){   // left 
            if (board[i][0] == '-'){
                floodFill(board, i, 0, '-', 'O');
            }
        }
        for (int i=0; i<height; i++){  //  right 
            if (board[i][width-1] == '-'){
                floodFill(board, i, width-1, '-', 'O'); 
            }
        }
        for (int i=0; i<width; i++){   // top 
            if (board[0][i] == '-'){
                floodFill(board, 0, i, '-', 'O'); 
            }
        }
        for (int i=0; i<width; i++){  // bottom 
            if (board[height-1][i] == '-'){
                floodFill(board, height-1, i, '-', 'O'); 
            }
        }
        
        // Replace all -'s with X (filling out the surrounded regions)
        for(int i=0; i<height; i++){
            for(int j=0; j<width; j++){
                if(board[i][j] == '-'){
                    board[i][j] = 'X';
                }
            }
        }
        
    }
    
    // Find the searched value, then replace it along with all its adjacents
    // which have the same value (src: geeksforgeeks)
    void floodFill(vector<vector<char>>& board, int x, int y, char prevV, char newV) 
    { 
        if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size()) 
            return; 
        if (board[x][y] != prevV) 
            return; 

        // Replace the color at (x, y) 
        board[x][y] = newV; 

        // Recur for north, east, south and west 
        floodFill(board, x+1, y, prevV, newV); 
        floodFill(board, x-1, y, prevV, newV); 
        floodFill(board, x, y+1, prevV, newV); 
        floodFill(board, x, y-1, prevV, newV); 
    } 
    
    
};