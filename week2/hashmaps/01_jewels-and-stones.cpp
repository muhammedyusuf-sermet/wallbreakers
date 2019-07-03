class Solution {
public:
    int numJewelsInStones(string J, string S) {
        //unordered_map<char, int> output;
        int count = 0;
        
        for(char& stone: S){
            for(char& type: J){
                if(type == stone){
                    //output[type]++;
                    count++;
                }
            }
        }
        
        return count;
    }
};