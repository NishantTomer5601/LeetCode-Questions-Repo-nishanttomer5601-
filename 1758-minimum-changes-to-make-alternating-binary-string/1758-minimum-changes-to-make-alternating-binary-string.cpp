class Solution {
public:
    int minOperations(string s) {
        int n=s.length();
        int ans=INT_MAX;
        int count=0;
        bool ch=false;
        if(s[0]=='0') ch=false;
        else ch=true;
        
        for(int i=1;i<n;i++){
            if(!ch){
                if(s[i]=='1'){
                    ch=true;
                    continue;
                    
                }
                else{
                    count++;
                    ch=true;
                    
                }
                
            }
            else{
                if(s[i]=='0'){
                    ch=false;
                    continue;
                    
                }
                else{
                    count++;
                    ch=false;
                    
                }
                
                
            }
            
        }
        ans=min(ans,count);
        
        count=0;
        if(s[0]=='0'){ count++;ch=true;}
        else {count++;ch=false;}
        
        
        for(int i=1;i<n;i++){
            if(!ch){
                if(s[i]=='1'){
                    ch=true;
                    continue;
                    
                }
                else{
                    count++;
                    ch=true;
                    
                }
                
            }
            else{
                if(s[i]=='0'){
                    ch=false;
                    continue;
                    
                }
                else{
                    count++;
                    ch=false;
                    
                }
                
                
            }
            
        }
        ans=min(ans,count);
        
        return ans;
        
    }
};