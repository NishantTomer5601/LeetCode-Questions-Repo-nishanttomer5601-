class Solution {
public:
    int maxScore(string s) {
        int ans=INT_MIN;
        int n=s.length();
        int tz=0,to=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') tz++;
            else to++;
        }
        int count=0;int currZ=0,currO=0;
        if(s[0]=='0'){
            ans=to+1;
            count++;

        }
        else{
            ans=to-1;

        }
        
        for(int i=1;i<n;i++){
            int ch=0;
            ch=count+to-(i-count);
            ans=max(ans,ch);

            if(s[i]=='0') count++;            


        }
        return ans;
    }
};