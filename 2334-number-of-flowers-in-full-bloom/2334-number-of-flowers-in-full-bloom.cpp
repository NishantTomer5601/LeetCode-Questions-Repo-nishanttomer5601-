class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        int n=people.size();
        int m=flowers.size();
        vector<int> ans;

        vector<int> e,s;
        for(int i=0;i<m;i++){
            s.push_back(flowers[i][0]);
            e.push_back(flowers[i][1]);
        }
            sort(s.begin(),s.end());
            sort(e.begin(),e.end());

            for(int i=0;i<n;i++){
                int p=people[i];
                int c=lower_bound(e.begin(),e.end(),p)-e.begin();
                int d=upper_bound(s.begin(),s.end(),p)-s.begin();
                ans.push_back(d-c);

            }
            
            
            
        
        
        return ans;
    }
};

        // TLE approach:

// #include<bits/stdc++.h>

// class cmp{
//     public:
//     bool operator()(vector<int> &a, vector<int> &b){
//         return a[1]<b[1];
        
//     }
// };

// class Solution {
// public:
//     bool solve(int mid,vector<vector<int>>& flowers,int ind,int people){
//         int n=flowers.size();
//         int count=0;
//         for(int j=ind;j<n;j++){
//                 if(flowers[j][0]<=people) count++;
//                 if(count>=mid) return true;
//             }
        
//         return false;
//     }
    
//     vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
//         int n=people.size();
        
//         vector<int> ans;
//          vector<int> s,e;
        
        
//         sort(flowers.begin(),flowers.end(),cmp());
//         // for(int i=0;i<flowers.size();i++){
//         //      cout<<flowers[i][0]<<" "<<flowers[i][1]<<endl;
//         // }
//         for(int i=0;i<flowers.size();i++){
//             v.push_back(flowers[i][1]);
//         }
        
        
//         for(int i=0;i<n;i++){
            
//             int ind=lower_bound(v.begin(),v.end(),people[i])-v.begin();
//             int count=0,st=0,en=flowers.size()-ind;
            
//             //linear search:
//             // for(int j=ind;j<flowers.size();j++){
//             //     if(flowers[j][0]<=people[i]) count++;
//             // }
            
            
//     //binary search:
            
//             while(st<=en){
//                 int mid=(st+en)/2;
//                 bool check=solve(mid,flowers,ind,people[i]);
//                 if(check){
//                     count=mid;
//                     st=mid+1;
                    
//                 }
//                 else{
//                     en=mid-1;
                    
//                 }
//             }
            
            
            
//             ans.push_back(count);
//         }
        
//         return ans;
//     }
// };