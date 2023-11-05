class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n=arr.size();
        if(k>=n) return *max_element(arr.begin(),arr.end());
        
        deque<int> q;
        for(int i=0;i<n;i++){
            q.push_back(arr[i]);
        }
        int cc=0,ele=-1,count=0;
        
        while(1){
            if(count>=k){
                return q.front();
            }
            
            
            int a=q.front();
            q.pop_front();
            int b=q.front();
            q.pop_front();
            
            int winner=0;
            
            if(a>b){
                q.push_back(b);
                q.push_front(a);
                winner=a;
                
                
                
            }
            else{
                q.push_back(a);
                q.push_front(b);
                winner=b;
            }
            
            if(winner!=ele){
                ele=winner;
                count=1;
            }
            else{
                count++;
            }
        }
       return 0; 
    }
};