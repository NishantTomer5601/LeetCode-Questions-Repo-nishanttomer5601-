class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int count=0;
        vector<int> v;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<m;j++){
                
                if(mat[i][j]==1){
                    c++;
                    
                }
            }
            v.push_back(c);
            
        }
        
        for(int i=0;i<m;i++){
            int c=0;
            for(int j=0;j<n;j++){
                
                if(mat[j][i]==1){
                    c++;
                    
                }
            }
            v.push_back(c);
            
        }
        
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                
                if(mat[i][j]==1){
                    if(v[i]==1 && v[n+j]==1)count++;
                    
                }
            }
           
            
        }
            
            return count;
        
    }
};