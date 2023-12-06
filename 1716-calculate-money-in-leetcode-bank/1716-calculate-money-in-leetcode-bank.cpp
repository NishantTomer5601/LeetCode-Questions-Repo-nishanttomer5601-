class Solution {
public:
    int totalMoney(int n) {
        int startMon=1;
        int currMon=1;
        
        int ans=0;
        int m=n/7;
        
        
        while(m--){
            ans+=(startMon);
            currMon=startMon;
            startMon++;
            
            for(int i=1;i<=6;i++){
                ans=ans+(currMon+i);
            }
            
        }
        cout<<ans<<endl;
        int b=n%7;
        if(b==0) return ans;
        ans=ans+(startMon++);
        
        b--;
        while(b--){
            ans=ans+(startMon++);
            
        }
        return ans;
    }
};
