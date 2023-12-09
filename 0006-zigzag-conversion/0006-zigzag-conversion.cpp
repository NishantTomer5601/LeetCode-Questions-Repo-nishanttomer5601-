class Solution {
public:
    string convert(string s, int rows) {
        string ans="";
        if(rows==1) return s;
        vector<vector<char>> v(rows);
        int n=s.length();
        int r=0;
        bool dir=true;
        for(int i=0;i<n;i++){
            if(r>=rows){ 
                
                dir=false;
                r-=2;
            }
            if(r<0){
                dir=true;
                r+=2;
            }
            if(dir){
                v[r].push_back(s[i]);
                r++;
                
            }
            else{
                v[r].push_back(s[i]);
                r--;
                
                
            }
            
            
            
        }
        for(auto it:v){
            for(auto itt:it){
                ans.push_back(itt);
            }
        }
        
        
        
        
        return ans;
        
    }
};