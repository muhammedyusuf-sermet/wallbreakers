class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // we can benefit the fact that there are only 2 numbers
        // to add up to a certain value. If we didn't have the given
        // constraints, this is actually a great question that can
        // be efficiently solved with approaches from Digital Signal Processing
        
        unordered_map<int, int> map;
        for(int i=0; i<nums.size(); i++){
            if(map.find(target-nums[i]) != map.end()){
                return {map.at(target-nums[i]), i};
            }
            map[nums[i]]=i;
        }
        return {0,0}; // we couldnt found it
    }
};