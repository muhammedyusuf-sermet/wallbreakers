class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        // represents the number of each bill the cashRegister has
        // [0]: $5, [1]: $10, [2]: $20
        vector<int> cashRegister(3,0);
        
        // Complexity: O(N)
        for(int i=0; i<bills.size(); i++){
            if(bills[i] == 5){
                cashRegister[0]++;
            }
            else if(bills[i] == 10){
                if(cashRegister[0] > 0){
                    cashRegister[0]--;
                    cashRegister[1]++;
                }
                else{
                    return false;
                }
            }
            else{ // only remaining bill is $20
                if(cashRegister[1]>0 && cashRegister[0]>0){
                    cashRegister[0]--;
                    cashRegister[1]--; 
                }
                else if(cashRegister[0]>2){
                    cashRegister[0] -= 3;
                }
                else{
                    return false;
                }
                cashRegister[2]++;
            }
        }
        
        return true;
    }
};