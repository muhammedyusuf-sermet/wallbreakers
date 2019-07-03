class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> S1(nums1.begin(), nums1.end());
        vector<int> output; 

        for(auto& num: nums2){ 
            if(S1.count(num)){
                if(find(output.begin(), output.end(), num) == output.end()){
                    output.push_back(num);
                }
            }
        }
        
        return output;
    }
};