class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // Assume vector is not empty
        
        int &last = digits.back();
        last = last + 1;
        if(last == 10){
            last = 0;
            carryOne(digits, digits.size()-2);    
        }
        return digits;
    }
    
    void carryOne(vector<int>& digits, int index){
        if(index < 0){
            // using a queue might have been better
            digits.insert(digits.begin(),1);
        }
        else{ 
            int &active = digits[index];
            active++;
            if(active == 10){
                active = 0;
                carryOne(digits, index-1);    
            }
        }
        
    }
};