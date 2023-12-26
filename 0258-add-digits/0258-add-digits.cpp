class Solution {
public:
    int addDigits(int num) {
        if(num>0 && num<10) return num;
        string s=to_string(num);
        while(s.length()!=1){
            int sum=0;
            for(int i=0;i<s.length();i++){
                sum=sum+(s[i]-'0');
            }
            
            
            s=to_string(sum);
            
        }
        return stoi(s);
    }
};