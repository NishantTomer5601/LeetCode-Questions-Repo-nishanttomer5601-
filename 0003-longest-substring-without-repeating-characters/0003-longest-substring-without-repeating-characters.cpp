class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n==0) return 0;
        unordered_map<char,int> map;
        int ans=INT_MIN;
        queue<char> q;
        int streak=0;
        for(int i=0;i<n;i++){
            char c=s[i];
            if(map[s[i]]==0){
                q.push(s[i]);
                map[s[i]]++;
                streak++;               
                ans=max(streak,ans);

            }
            else{
                while(!q.empty() && map[c]!=0){
                   map[q.front()]--;
                    q.pop();

                }
                map[c]++;
                q.push(c);
                streak=q.size();
                ans=max(streak,ans);
              

            }
        }

        return ans;
        
    }
};