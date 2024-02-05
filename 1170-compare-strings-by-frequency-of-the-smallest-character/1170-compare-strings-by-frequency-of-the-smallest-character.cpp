class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& q, vector<string>& w) {
        int n=q.size();
        int m=w.size();
        vector<int> ans;
        
        vector<int> v,vv;
        int count=1;
        for(int i=0;i<n;i++){
            count=1;
            sort(q[i].begin(),q[i].end());
           
            for(int j=1;j<q[i].length();j++){
                if(q[i][j]==q[i][j-1]) count++;
                else{
                    
                    break;
                }
            }
            v.push_back(count);
        }
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        cout<<endl;
        
        for(int i=0;i<m;i++){
            count=1;
            sort(w[i].begin(),w[i].end());
            for(int j=1;j<w[i].length();j++){
                if(w[i][j]==w[i][j-1]) count++;
                else{
                   // vv.push_back(count);
                    break;
                }
               
            }
             vv.push_back(count);
        }
        
        for(int i=0;i<vv.size();i++) cout<<vv[i]<<" ";
        cout<<endl;
        sort(vv.begin(),vv.end());
        int c=0;
        for(int i=0;i<v.size();i++){
            c=0;
            int a=v[i];
            for(int j=0;j<vv.size();j++){
                if(vv[j]>a) c++;
            }
            ans.push_back(c);
        }
        
        
        return ans;
    }
};