class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_set<int> kindsOfCandies(candies.begin(), candies.end());
        uint16_t candiesPerSibling = candies.size()/2;
        
        uint16_t kinds = kindsOfCandies.size();
        
        if(kinds >= candiesPerSibling){
            return candiesPerSibling;
        }
        else{
            return kinds;
        }
    }
};