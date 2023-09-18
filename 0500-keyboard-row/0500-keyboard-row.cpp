class Solution {
public:
    vector<string> findWords(vector<string>& w) {
        int n=w.size();
        vector<string> ans;
        string a="qwertyuiop";
        string b="asdfghjkl";
        string c="zxcvbnm";
        unordered_map<char,int> map;
        for(int i=0;i<a.length();i++){
            map[a[i]]=1;
            map[toupper(a[i])]=1;

        }
        for(int i=0;i<b.length();i++){
            map[b[i]]=2;
             map[toupper(b[i])]=2;
        }
        for(int i=0;i<c.length();i++){
            map[c[i]]=3;
            map[toupper(c[i])]=3;
        }

        bool check =true;

        for(int i=0;i<n;i++){
            check =true;
            string st=w[i];
            int row=map[st[0]];
            for(int j=1;j<st.length();j++){
                if(map[st[j]]!=row){
                    check=false;
                    break;
                }
            }
            if(check) ans.push_back(st);
        }


       return ans; 
    }
};