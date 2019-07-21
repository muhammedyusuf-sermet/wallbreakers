class Solution {
public:
    int scoreOfParentheses(string S) {
        // We are assuming S is already balanced
        stack<char> parantheses;
        
        int depth = 0, totalScore=0;
        bool CalcScoreflag=false;
        
        for(char& bracket: S){
            if(bracket == '('){
                parantheses.push(bracket);
                depth++;
                CalcScoreflag = true;
            }
            else{
                if(CalcScoreflag){ // calculate score here
                    totalScore += pow(2, depth-1);
                    CalcScoreflag = false;
                }
                parantheses.pop();
                depth--;
            }
        }
        
        return totalScore;
    }
};