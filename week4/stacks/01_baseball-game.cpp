class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> scores;
        int roundScore = 0, sum = 0;
        
        for(string& op: ops){
            if(op == "+"){
                int last = scores.top();
                scores.pop();
                roundScore = scores.top();
                roundScore += last;
                scores.push(last);
                scores.push(roundScore);
            }
            else if(op == "D"){
                scores.push(scores.top()*2);
            }
            else if(op == "C"){
                scores.pop();
            }
            else{ // Integer
                scores.push(stoi(op));
            }
        }
        
        while (!scores.empty()) 
        { 
            sum += scores.top(); 
            scores.pop(); 
        } 
        
        return sum;
    }
};