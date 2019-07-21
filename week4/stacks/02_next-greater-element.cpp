class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // approach is to take find the next greater number for each
        // element in nums2. Then, we can see if an element in nums1 
        // exist, and we can return the next greater element after that
        
        stack<int> buffer;
        unordered_map<int, int> nextGreaterElementMap;
        
        for(int& num2: nums2){
            while(!buffer.empty() && buffer.top() < num2){
                nextGreaterElementMap[buffer.top()] = num2;
                buffer.pop();
            }
            buffer.push(num2);
        }
        
        for(int& num1: nums1){
            if(nextGreaterElementMap.count(num1)){
                num1 = nextGreaterElementMap[num1];
            }
            else{
                num1 = -1;
            }
        }
        
        return nums1;
    }
};