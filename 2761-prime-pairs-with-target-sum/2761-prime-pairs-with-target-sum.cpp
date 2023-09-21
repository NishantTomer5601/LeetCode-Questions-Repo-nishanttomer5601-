class Solution {
private: 
    
    // Sieve of Erathonese:
    
    void fill_vec(vector<int> &v,int n){
        v[0]=0;v[1]=0;
        for(int i=2;i*i<=n;i++){
            if(v[i]==1){
            for(int j=i*i;j<=n;j+=i){
                v[j]=0;
            }
            }
        }
        
        
    }
    
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<int> v(1e6+8,1);
        vector<vector<int>> ans;
        
        fill_vec(v,n+1);
        for(int i=2;i<=n/2;i++){
            if(v[i]==1 && v[n-i]==1){
                ans.push_back({i,n-i});
                
            }
        }
       // cout<<v[2]<<" "<<v[3]<<" "<<v[6]<<" "<< v[9]<<" "<<v[7];
        return ans;
    }
};