class Solution {
public:
    int findMinDifference(vector<string>& pts) {
        int n=pts.size();
//         vector<int> ans;
//         for(int i=0;i<n;i++){
//             int a=0;
//             string x=timePoints[i];
//             int u=x[3]-'0';
//             int p=x[4]-'0';
//             a=u*10 +p;
//             ans.push_back(a);
            
//         }
//         sort(ans.begin(),ans.end());
//         int mini=INT_MAX;
//         for(int i=0;i<n-1;i++){
//             mini=min(mini,min(60-ans[i  ]))
//         }
        sort(pts.begin(),pts.end());
        for(int i=0;i<n;i++) cout<<pts[i]<<" ";
        // return 0;
        cout<<endl;
        
        int ans=INT_MAX;
        
        
        for(int i=1;i<n;i++){
            
            int a=((pts[i-1][0]-'0')*10 +(pts[i-1][1]-'0'));  
            cout<<a<<" ";
            int b=((pts[i][0]-'0')*10 +pts[i][1]-'0');
            cout<<b<<" ";
            int c=(pts[i-1][3]-'0')*10 +(pts[i-1][4]-'0');
            cout<<c<<" ";
            int d=(pts[i][3]-'0')*10 +(pts[i][4]-'0');
            cout<<d<<" ";
            int v=(b-a)*60 -c+d;
            if(v>720) v=1440-v;
            
            ans=min(ans,v);
        }
        
        
        int a=((pts[0][0]-'0')*10 +(pts[0][1]-'0'));   
            int b=((pts[n-1][0]-'0')*10 +pts[n-1][1]-'0');
            int c=(pts[0][3]-'0')*10 +(pts[0][4]-'0');
            int d=(pts[n-1][3]-'0')*10 +(pts[n-1][4]-'0');
            
            int v=(b-a)*60 -c+d;
            if(v>720) v=1440-v;
            
            ans=min(ans,v);
        
        
        return ans;
    }
};