class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        queue<int> rotatedVec;
        int i;
        int vecSize = nums.size();
        
        k = k%vecSize;
        
        for(i=vecSize-k; i<vecSize; i++){
            rotatedVec.push(nums[i]);
        }
        
        for(i=vecSize-k-1; i>=0; i--){
            nums[i+k] = nums[i];
        }
        
        for(i=0; i<k; i++){
            nums[i] = rotatedVec.front();
            rotatedVec.pop();
        }
        
    }
};