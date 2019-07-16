class Solution {
public:
    int maxProfit(vector<int>& prices) {             
        int buy=INT_MAX, maxProfit=0;
   
        for(int i=0; i<prices.size(); i++){
            if(prices[i]<buy){
                buy = prices[i];
            }
            else if (prices[i]-buy>maxProfit){
                maxProfit = prices[i]-buy;
            }
        }
        return maxProfit;
    }
};