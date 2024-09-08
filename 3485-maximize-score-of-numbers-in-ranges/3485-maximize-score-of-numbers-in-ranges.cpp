class Solution {
public:
bool canAch(vector<int>& start, int d,int n,long long m){
    int prev=start[0];
    for(int i=1;i<n;i++){
        long long nxtS=0;
        long long x=prev+m;
        if(start[i]>x) nxtS=start[i];
        else nxtS=x;
        if(nxtS>start[i]+d){
            return false;
        }
        prev=nxtS;

    }
    return true;

}

    int maxPossibleScore(vector<int>& start, int d) {
        sort(start.begin(),start.end());
        int n=start.size();
        long long l=0,h=1e9+d;
        while(l<h){
            long long mid=(l+h+1)/2;
            if(canAch(start,d,n,mid)){
                l=mid;
            }
            else{
                h=mid-1;
            }
        }
        return l;
    }
};