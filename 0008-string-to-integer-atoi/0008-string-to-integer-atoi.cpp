#define ll long long
class Solution {
public:
    int myAtoi(string s) {
        int n=s.length();
        int i=0;
        while(i<n){
            if(s[i]==' ')
            i++;
            else if(s[i]=='-'|| s[i]=='+' || s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'|| s[i]=='8' ||s[i]=='9') break;
            else return 0;
            
        }
        
        if(i==n) return 0;
        ll ans=0;
        
        bool sign=true;
        if(s[i]=='-') {sign=false;i++;}
        else if(s[i]=='+') {sign =true;i++;}
        if(i<n &&(s[i]=='+' || s[i]=='-')) return 0;
    //    while(s[i]=='+' || s[i]=='-') i++;
        
            while(i<n && s[i]!=' ' ){
                if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'|| s[i]=='8' ||s[i]=='9'){
                ll a=s[i]-'0';
                ans=ans*10+a;
                i++;
                if(sign && ans>=INT_MAX){
                    
                    return INT_MAX;
                }
                else if(!sign && ans>(INT_MAX)) return INT_MIN;
                }
                else break;
                
                
                
            }
            
        
        if(sign) return ans;
        
        return -1*ans;
    }
};