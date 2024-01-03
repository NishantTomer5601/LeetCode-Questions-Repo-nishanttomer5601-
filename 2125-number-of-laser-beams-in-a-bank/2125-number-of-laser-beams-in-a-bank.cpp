class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        int ans=0;
        vector<int> v;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<bank[i].length();j++){
                if(bank[i][j]=='1') count++;
                
            }
            v.push_back(count);
        }
        int index=-1;
        for(int i=0;i<v.size();i++){
            if(v[i]!=0){
                index=i;break;
            }
            
        }
        if(index==-1) return 0;
        int i=0;
        for(i=index;i<n;){
            int j=i+1;
            while(j<n && v[j]==0){
                j++;
                
            }
            if(j<n){
                ans=ans+(v[i]*v[j]);
                i=j;
            }
            else{
                break;
            }
        }
        return ans;
    }
};