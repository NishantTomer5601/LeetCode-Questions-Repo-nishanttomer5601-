class Solution {
public:
    int minimumSum(int n, int k) {
        int count=0,sum=0;
        bool ch=false;
        
        for(int i=1;i<=k/2;i++){
            if(count<n){
                sum+=i;
                count++;
            }
            else{ch=true; break;}
        }
        if(ch) return sum;
        while(count!=n){
            sum+=k;
            k++;
            count++;
        }
        return sum;
    }
};