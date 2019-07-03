class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char> output;
        int count = 0;
 
        for(char& type: J){
            output.insert(type);
        }
        
        for(char& stone: S){
            if(output.count(stone)){
                //output[type]++;
                count++;
            }
        }
        return count;
        
//         for(char& stone: S){
//             output[stone]++;
//         }
        
//         for(char& type: J){
//             count += output[type];
//         }
//         return count;
    }
};