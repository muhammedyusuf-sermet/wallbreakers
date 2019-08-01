class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        vector<pair<int, int>> sides = { {1,0}, {-1,0}, {0,-1}, {0,1} };
        int length = grid.size(),
            height = 0;
        int perimeter = 0;
        for(int i=0; i<length; i++){
            height = grid[i].size(); // sort of unnecesarry here
            for(int j=0; j<height; j++){
                if(grid[i][j]==0){
                    continue;
                }
                
                // check its four corners
                for(int t=0; t<4; t++){
                    int x = i + sides[t].first;
                    int y = j + sides[t].second;
                    
                    if(x<0 || y<0 || x>=length || y>=height){
                        perimeter++;
                    }
                    else if(grid[x][y] == 0){
                        perimeter++;
                    }
                }
                
            }
        }
        
        return perimeter;
    }
};