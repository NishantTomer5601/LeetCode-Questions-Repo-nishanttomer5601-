class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string t="";
        int n=s.length();
        int i=n-1;
        while(s[i]==' ')i--;
        
        while(i>=0){
            if(s[i]!=' '){            
                t+=s[i];
                i--;
            }
            else{
                if(t.length()>0)
                reverse(t.begin(),t.end());
                ans+=t;
                t="";
                while(i>=0 && s[i]==' ')i--;
                if(i>=0)
                ans+=' ';
            }
        }
        if(t.size()>0){
            reverse(t.begin(),t.end());
                ans+=t;
        }
        return ans;
        
    }
};