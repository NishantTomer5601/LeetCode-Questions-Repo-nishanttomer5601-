class Solution {
public:
    int maxCoins(vector<int>& p) {
        int n=p.size();
        sort(p.begin(),end(p));
        if(n==3) return p[1];

        int ans=0;

        int i=n-2,j=0;
        while(i>=0 && j<i){
            ans+=p[i];
            i-=2;
            j++;
        }

        return ans;
    }
};