class Solution {
public:
    vector<string> cellsInRange(string s) {
        
        int st=s[1]-'0';
        int en=s[4]-'0';
        char ch=s[0];
        char chh=s[3];
        vector<string> ans;
        
        while(ch!=(chh+1)){
            for(int i=st;i<=en;i++){
                string ss="";
                ss+=ch;
                ss=ss+to_string(i);
                
                ans.push_back(ss);
            }
            ch++;
            
        }
        return ans;
    }
};