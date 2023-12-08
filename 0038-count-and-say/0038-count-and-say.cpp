class Solution {
public:
    string solve(int i, int n,string &ans,string &num){
         
        if(i==n+1) return ans;
        num=ans;
        //new string formation:
        int prevnum=num[0]-'0';
        int count=1;
        ans="";
        for(int i=1;i<num.length();i++){
            if(num[i]-'0'==prevnum){
                count++;
                
                
            }
            else{
                
                ans+=(to_string(count)+to_string(prevnum));
                count=1;
                prevnum=num[i]-'0';
                
                
            }
            
            
        }
        ans+=(to_string(count)+to_string(prevnum));
        
        
        return solve(i+1,n,ans,num);
        
    }
    string countAndSay(int n) {
        if(n==1) return "1";
        if(n==2) return "11";
        string ans="11";
        string num="11";
        return solve(3,n,ans,num);
       
        
    }
};