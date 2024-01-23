class Solution {
    
private:
   
    
    void solve(vector<string>& arr,int n,string &ch,int i, int len){
        //base case:
        if(i>=n){
            ans=max(ans,len);
            return;
        }
        
        //if can be included:
        
        
        string t=ch;
        if(check(ch+arr[i])){
            ch+=arr[i];
            solve(arr,n,ch,i+1,len+arr[i].length());
            ch=t;
            
        }
        solve(arr,n,ch,i+1,len);
                
        
    }
     bool check(string s)
    {
        
        vector<int> hash(26, 0);
        for (auto &i: s) if (hash[i - 'a']++) return false;
        return true;	
    }
    
public:
     int ans=INT_MIN;
    
    int maxLength(vector<string>& arr) {
        int n=arr.size();
        int len=0;
      
        string ch="";
        solve(arr,n,ch,0,len);
        
        return ans;
        
    }
};




