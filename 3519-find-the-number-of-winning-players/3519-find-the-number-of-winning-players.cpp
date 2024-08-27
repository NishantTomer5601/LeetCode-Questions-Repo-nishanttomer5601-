class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        //unordered_map<int,vector<int>> mp;
       // int n=10;
        vector<vector<int>> m(n,vector<int>(11,0));
        int count=0;
        set<int> s;

       for(int i=0;i<pick.size();i++){
        int x= pick[i][0];
        int y= pick[i][1];

       int current_status= ++m[x][y];
       if(current_status >x && s.find(x)==s.end()){ count++; s.insert(x); }
              


       }
      return count;
        
    }
};