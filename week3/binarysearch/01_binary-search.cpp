class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int middle = end/2;
        
        // O(logN)
        while(start<=end){
            middle = (start+end)/2;
            if(nums[middle]==target){
                return middle; // index
            }
            else if(nums[middle]<target){
                start = middle+1;
            }
            else{
                end = middle-1;
            }
        }

        return -1;
    }
};