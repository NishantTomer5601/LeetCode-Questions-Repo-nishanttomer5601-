class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.length();
        string ans="";
        vector<int> v;
        v.push_back(0);
        int count=1;
        for(int i=1;i<n;){
            if(s[i]=='('){
                count++;
                i++;
                
                
            }
            else{
                count--;
                if(count==0){
                v.push_back(i);
                if(i!=n-1){
                    v.push_back(i+1);
                    i+=2;
                    count=1;
                }
                    else{
                        i++;
                        
                    }
                
            }
              else i++;  
                
            }
            
            
        }
        
        for(int i=0;i<n;i++){
          if(find(v.begin(),v.end(),i)==v.end()) ans+=(s[i]);
        }
     return ans;   
    }
};