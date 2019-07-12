class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b){
            return a[0] < b[0]; 
        });
        
        //cout << points[0][0] << " " << points[0][1];
        
        int i=0, bound=0, arrows=0;
        
        for(i; i<points.size(); i++){
            arrows++;
            bound = points[i][1];
            for(i=i+1; i<points.size(); i++){
                if(bound<points[i][0]){
                    break;
                }
                else if(bound > points[i][1]){
                    bound = points[i][1];
                }
            }
            i--;
        }
        
        return arrows;
    }
};