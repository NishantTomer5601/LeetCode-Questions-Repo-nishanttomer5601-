class Solution {
public:
    bool isSameAfterReversals(int num) {
        string s=to_string(num);
        int n=s.length();
        if(num==0) return true;
        if(s[n-1]=='0') return false;
        return true;
    }
};