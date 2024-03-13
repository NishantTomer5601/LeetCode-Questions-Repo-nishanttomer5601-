class Solution {
public:
    void preparePrefixSum(int n, vector<int>&v){
        v[0]=1;
        for(int i=1;i<n;i++){
            v[i]=v[i-1]+i+1;            
        }
    }
    
    int pivotInteger(int n) {
        if(n==1) return 1;
        if(n==2) return -1;
        vector<int> v(n);
        preparePrefixSum(n,v);
        int ans=-1;
       for(auto it:v) cout<<it<<" ";
        for(int i=1;i<n;i++){
            if(v[n-1]-v[i-1]==v[i]) return i+1;
        }
        
        return ans;
        
    }
};