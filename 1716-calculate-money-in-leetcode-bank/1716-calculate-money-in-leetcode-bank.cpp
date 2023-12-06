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

// class Solution {
// public:
//     int solve(int week){
//         int result=0;
//            for(int i=0;i<week;i++){
//                result+=28+(i*7);
//            }
//            return result;
//     }
//     int totalMoney(int n) {
//        int week=n/7;
//        int ans=solve(week);
//        int day=n%7;
//        if(day==0){
//            return ans;
//        }
//        else{
//            week++;
//            while(day--){
//                ans+=week++;
//            }
//        }
//        return ans;
//     }
// };