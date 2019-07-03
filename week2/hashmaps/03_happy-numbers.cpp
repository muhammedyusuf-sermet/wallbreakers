class Solution {
public:
    bool isHappy(int n) {     
        // assume n is positive        
        
        unordered_set<int> visitedNumbers; 
        
        visitedNumbers.insert(n);
        while(n!=1){
            n = getHappyResult(n);
            if(visitedNumbers.count(n)){
                return false;
            }
            visitedNumbers.insert(n);
        }
        
        return true;
    }
    
    int getHappyResult(int n){
        int sum = 0;
        for(int i=n;i>0;i=i/10)
        {
            sum += pow(i % 10, 2);
        }
        return sum;
    }
};