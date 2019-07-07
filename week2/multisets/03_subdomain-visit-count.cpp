class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        // this solution can very well be optimized.
        // But first, actually solve it.
        unordered_map<string, int> histOfDomains;
        vector<string> result;
        
        size_t space;
        int count;
        int dotLocation;
        string domain, subdomain;
        for(string& cpdomain: cpdomains){
            if ((space = cpdomain.find(" ")) != string::npos){ // divide string by space
                count = stoi(cpdomain.substr(0,space));
                domain = cpdomain.substr(space+1, string::npos);

                // the whole domain
                histOfDomains[domain] += count;
                
                dotLocation = domain.find('.');
                while(dotLocation != string::npos){                    
                    subdomain = domain.substr(dotLocation+1, string::npos);
                    histOfDomains[subdomain] += count;
                    
                    dotLocation = domain.find('.', dotLocation+1);
                }
                
            }
        }
        
        for(auto& histElement: histOfDomains){
            result.push_back(to_string(histElement.second) + " " + histElement.first);
        }
        
        return result;
    }
};