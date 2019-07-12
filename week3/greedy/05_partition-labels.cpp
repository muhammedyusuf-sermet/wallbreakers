class Solution {
public:
    vector<int> partitionLabels(string S) {
        // we can assume it's all lowercase letters
        vector<int> output;
        
        vector<int> freqPartition(26,0);
        vector<int> freqS(26,0);
        for(char& letter: S){
            freqS[(int)letter-97]++;
        }
        
        int partitionStart=0;
        for(int i=0; i<S.size(); i++){
            freqPartition[(int)S[i]-97]++;
            freqS[(int)S[i]-97]--;
            if(isPartition(freqPartition, freqS)){
                output.push_back(i+1-partitionStart);
                partitionStart = i+1;
                reset(freqPartition);
            }
        }
        
        return output;
    }
    
    bool isPartition(vector<int>& ref, vector<int>& b){
        for(int i=0; i<ref.size(); i++){
            if(ref[i] != 0){
                if(b[i] != 0){
                    return false;
                }   
            }
        }
        return true;
    }
    
    void reset(vector<int>& a){
        for(int i=0; i<a.size(); i++){
            a[i]=0;
        }
    }
};