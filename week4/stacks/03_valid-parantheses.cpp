class Solution {
public:
    bool isValid(string s) {
        stack<char> parantheses;
        
        unordered_map<char, char> bracketMap;
        bracketMap[')'] = '(';
        bracketMap['}'] = '{';
        bracketMap[']'] = '[';
        
        for(char& bracket: s){
            if(bracket == '(' || bracket == '{' || bracket == '['){
                parantheses.push(bracket);    
            }
            else if(parantheses.empty()){
                return false; // because we have a closing bracket, but no elements in stack
            }
            else if(bracketMap[bracket] == parantheses.top()){
                parantheses.pop();
            }
            else{
                return false;
            }
        }
        
        return parantheses.empty();
    }
};