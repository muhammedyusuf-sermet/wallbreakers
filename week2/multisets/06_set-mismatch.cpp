class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> freq(nums.size()+1, 0);
        vector<int> output(2);
        
        for(int& num: nums){
            freq[num]++;
            if(freq[num] == 2){
                output[0] = num;
            }
        }
        
        for(int i=1; i<freq.size(); i++){
            if(freq[i]==0){
                output[1] = i;
                break;
            }
        }
        
        return output;
    }
};