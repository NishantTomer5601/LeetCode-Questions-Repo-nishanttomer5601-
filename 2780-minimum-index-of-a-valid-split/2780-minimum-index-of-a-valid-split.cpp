class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int ans=-1;
        int n=nums.size();
        if(n==1) return -1;
        vector<int> f(nums.size()-1,-1);
        vector<int> b(nums.size()-1,-1);
        unordered_map<int,int> map;
        unordered_map<int,int> mapp;
        int maxx=-1;
        for(int i=0;i<n-1;i++){
            map[nums[i]]++;
            if(2* map[nums[i]]>i+1){
                maxx=nums[i];
                f[i]=maxx;
            }
            else if(2*mapp[maxx]>i+1){
                f[i]=maxx;
            }
            
        }
        
           for(int i=0;i<n-1;i++){
            cout<<f[i]<<" ";          
            
        }
        cout<<endl;
        
       maxx=-1;
        
        for(int i=n-1;i>0;i--){
            mapp[nums[i]]++;
            if(2* mapp[nums[i]]>(n-i)){
                maxx=nums[i];
                b[i-1]=maxx;
            }    
            else if(2*mapp[maxx]>n-i){
                b[i-1]=maxx;
            }
            
        }
        
        for(int i=0;i<n-1;i++){
            cout<<b[i]<<" ";          
            
        }
        cout<<endl;
        
        for(int i=0;i<f.size();i++){
            if(f[i]==b[i] && f[i]!=-1) return i;
        }
        
        return ans;
    }
};