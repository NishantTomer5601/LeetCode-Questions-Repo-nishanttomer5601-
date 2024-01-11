class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.length();
        bool check=false;
        string ans="";
        for(int i=0;i<n;i++){
           // string ans="";
            ans=ans+s[i];
            // cout<<ans<<" ";
            // cout<<endl;
            int count=n/ans.length()-1;
            if(n==ans.length()) return false;
            if(n%ans.length()!=0) continue;
            else{
                string c=ans;
                while(count--){
                    c+=ans;
                    
                    
                }
                //cout<<c<<" "<<endl;
                if(c==s) return true;
                
                
            }
            
        }
       return check;
    }
};