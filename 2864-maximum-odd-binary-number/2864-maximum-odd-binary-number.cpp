class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1')count++;
        }
        int i=0;
        if(count==1){
            sort(s.begin(),s.end());
            return s;
        }
        else{
            string ss(s.length(),'0');
            ss[s.length()-1]='1';
            count--;
            while(count--){
                ss[i++]='1';
                
            }
            return ss;
        }
        return s;
    }
};