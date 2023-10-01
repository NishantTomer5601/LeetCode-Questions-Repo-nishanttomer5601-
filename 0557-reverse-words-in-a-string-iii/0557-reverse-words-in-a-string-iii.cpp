class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        int j=0;
        if(n<=1) return s;

            
        vector<int> v;
        for(int i=0;i<n;i++){
           char ch=s[i];
           if(ch==' ') v.push_back(i);
        }
           
            for(int i=0;i<v.size();i++){
                reverse(s.begin()+j,s.begin()+v[i]);
                j=v[i]+1;
            }
       reverse(s.begin()+j,s.end());
        
        
        return s;
    }
};