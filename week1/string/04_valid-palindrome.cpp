class Solution {
public:
    bool isPalindrome(string s) {      
        s.erase(std::remove_if(s.begin(), s.end(), []( auto const& c ) -> bool { return !std::isalnum(c); } ), s.end());
        
        int begin = 0;
        int end = s.size()-1;
        while(begin<end){
            if(toupper(s[begin++]) != toupper(s[end--])){
                return false;
            }
        }
        
        return true;
    }
};