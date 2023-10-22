class Solution {
public:
    int largestPalindrome(int n) {
        if(n==1) return 9;
        int low=pow(10,n-1);
        int high=pow(10,n)-1;
        for(int i=high;i>=low;i--){
            string res="";
            string s=to_string(i);
            res=s;
            reverse(s.begin(),s.end());
            res+=s;
            long long k=stoll(res);
            for(long long j=high;j*j>=k;j--){
                if(k%j==0 and k/j<=high) return k%1337;
            }
        }
        return 0;
    }
};