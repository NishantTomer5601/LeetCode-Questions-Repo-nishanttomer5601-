class Solution {
public:
    string getHint(string secret, string guess) {
        string ans="";
        vector<int> v;
        int count=0;
        int ii=0,jj=0;
        while(ii<secret.length() && jj<guess.length()){
            if(secret[ii]==guess[jj]){
                count++;
                v.push_back(ii);
            }
            ii++;jj++;
            
        }
        
        ans=ans+to_string(count)+"A";
        count=0;
        unordered_map<char,int> map;
        for(int i=0;i<secret.length();i++){
            if(find(v.begin(),v.end(),i)!=v.end()) continue;
            else{
                map[secret[i]]++;
                
            }
        }
        
        for(int i=0;i<guess.length();i++){
            if(find(v.begin(),v.end(),i)!=v.end()) continue;
            else{
                if(map.find(guess[i])!=map.end()){
                    map[guess[i]]--;
                    count++;
                    if(map[guess[i]]==0) map.erase(guess[i]);
                }
                
            }
        }
            
            
            
         ans=ans+to_string(count)+"B";
        return ans;
        
    }
};