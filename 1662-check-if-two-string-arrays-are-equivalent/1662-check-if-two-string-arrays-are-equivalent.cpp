class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w, vector<string>& t) {
        string a="";
        string b="";
        
        for(int i=0;i<w.size();i++){
            a+=w[i];
        }
        for(int i=0;i<t.size();i++){
            b+=t[i];
        }
        if(a==b) return true;
        return false;
        
    }
};