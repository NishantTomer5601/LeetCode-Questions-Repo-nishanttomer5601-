class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n=s.length();
        int m=t.length();
        string r="";



        for(int i=0;i<n;i++){
            if(i==0 && s[i]=='#'){
                continue;
            }
            else if(s[i]=='#'){
                if(r.size())
                r.erase(r.begin()+r.length()-1);
                else
                continue;

            }
            else{
                r+=s[i];
            }
        }

  string p="";
        for(int i=0;i<m;i++){
            if(i==0 && t[i]=='#'){

                continue;
            }
            else if(t[i]=='#'){
                if(p.size())
                p.erase(p.begin()+p.length()-1);
                else
                continue;

            }
            else{
                p+=t[i];
            }
        }
        if(r==p) return true;
        return false;


        
    }
};