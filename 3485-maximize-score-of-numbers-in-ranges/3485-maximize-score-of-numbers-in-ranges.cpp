#define ll long long
class Solution {
public:
bool canAch(vector<int> a, int d,int n,ll mid){
    for(int i=1;i<n;i++){
        if(a[i]-a[i-1]>=mid)continue;
        else{
            if(a[i]+d-a[i-1]<mid) return false;
            else{
                a[i]=a[i-1]+mid;
            }

        }
    }
   return true;

}

    int maxPossibleScore(vector<int>& start, int d) {
        sort(start.begin(),start.end());
        int n=start.size();
        ll l=0,h=INT_MAX;
        ll ans;
        while(l<=h){
            int mid=(l+h)>>1;
            if(canAch(start,d,n,mid)){
                ans=mid;
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return ans;
    }
};