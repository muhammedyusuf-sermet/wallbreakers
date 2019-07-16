class Solution {
public:
    double myPow(double x, int n) {
        if(n>=INT_MAX || n<=INT_MIN){
            if ((x == 1.0 || x == -1.0 )) {
                if(n%2==0){return abs(x);}
                return x;
            }
            return 0;
        }
        
        if(n<0){
            x=1/x;
            n=abs(n);
        }
            
        return myPowRecursive(x, n); 
        
    }
    
    double myPowRecursive(double x, int n){
        if(n==0){
            return 1;
        }
        
        if(n%2==0){
            return myPowRecursive(x,n/2) * myPowRecursive(x,n/2);
        }
        else{
            return x * myPowRecursive(x,n/2) * myPowRecursive(x,n/2);
        }
    }
};