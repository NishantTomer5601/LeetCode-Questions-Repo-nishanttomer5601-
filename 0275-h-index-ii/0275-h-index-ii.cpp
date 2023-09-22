class Solution {
public:
    bool check(vector<int>& ct,int mid,int n){
        if(ct[mid-1]>=mid) return true;
        return false;
        
    }
    
    int hIndex(vector<int>& ct) {
        int n=ct.size();
        if(n==1){
            if(ct[0]==0) return 0;
            return 1;
        }
        reverse(ct.begin(),ct.end());
        
        int low=0,high=n,mid=(high+low)/2,anx=0;
        
        while(low<=high){
            mid=(high+low)/2;
            if(mid==0){
                if(ct[mid]>=1) return 1;
                return 0;
                
            }
            bool ans=check(ct,mid,n);
            if(ans){
                low=mid+1;
                anx=low;
            }
            else{
                high=mid-1;
            }
        }
        
        return anx-1;
    }
};