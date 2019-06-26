class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> output;
        int counter = 1;
        string word = "";
        while(counter<=n){
            if(counter%3 == 0){
                word += "Fizz";
            }
            if(counter%5 == 0){
                word += "Buzz";
            }
            if(word.empty()){
                word += to_string(counter);
            }
            output.push_back(word);
            word = "";
            counter++;
        }
        return output;
    }
};