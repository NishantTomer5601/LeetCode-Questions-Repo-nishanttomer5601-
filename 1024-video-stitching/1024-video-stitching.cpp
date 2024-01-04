class Solution {
public:
    int videoStitching(vector<vector<int>>& clips, int time) {
        
        
        vector<int> v(time+1,-1);
        for(int i=0;i<clips.size();i++){
            int a=min(clips[i][0],time);
            int b=min(clips[i][1],time);
            v[a]=max(v[a],b);
        }
         int currmax = v[0];
        
        int nextmax = -1;
        
        int jumps = 1;
        
        if(v[0]==time) return 1;
        
        for(int i=0;i<=time;i++){
            
            nextmax = max(nextmax,v[i]);
            
            if(currmax==i){
                
                currmax = nextmax;
                jumps++;
                
            }
            
            if(currmax == time){
                
                return jumps;
                
            }
            
        }
        
        return -1;
        
    }
};

//  int videoStitching(vector<vector<int>>& clips, int time) {
        
//         vector<int>dp(time+1,-1);
        
//         for(int i=0;i<clips.size();i++){
            
//             int left = min(clips[i][0],time);
//             int right = min(clips[i][1],time);
            
//             dp[left] = max(dp[left] , right);
            
//         }
        
       
        
//         return -1;
        
//     }
// };