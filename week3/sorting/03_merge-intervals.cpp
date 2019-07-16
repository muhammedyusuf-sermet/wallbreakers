class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<2){
            return intervals;
        }
        
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b){
            return a[0] < b[0]; 
        });
        
        int i=0, bound=0;
        vector<vector<int>> overlappedIntervals;
        
        vector<int> interval = intervals[0];
        for(i; i<intervals.size(); i++){
            bound = intervals[i][1];
            interval[0] = intervals[i][0]; // start overlapped interval
            for(i=i+1; i<intervals.size(); i++){
                if(bound<intervals[i][0]){
                    interval[1] = bound; // end of overlapped interval
                    overlappedIntervals.push_back(interval);
                    interval = intervals[i];
                    break;
                }
                else if(bound < intervals[i][1]){
                    bound = intervals[i][1];
                    interval[1] = bound;
                }
            }
            i--;
        }
        
        overlappedIntervals.push_back(interval);
        
        return overlappedIntervals;
        
    }
};