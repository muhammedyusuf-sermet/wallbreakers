class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int contentChildren = 0;
        for(int i=0, j=0; i<s.size() && j<g.size(); i++){
            if(s[i]>=g[j]){
                contentChildren++;
                j++;
            }
        }
        
        return contentChildren;
    }
};