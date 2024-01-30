class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
       int ans=0;
        
        stack<string> s;
        for(int i=0;i<n;i++){
            
            if(tokens[i]=="*"||tokens[i]=="-"||tokens[i]=="/"||tokens[i]=="+"){
                int a=stoi(s.top());
                s.pop();
                int b=stoi(s.top());
                s.pop();
                
                int c=0;
                
                if(tokens[i]=="*"){
                    c=a*b;
                    
                }
                if(tokens[i]=="/"){
                    c=b/a;
                    
                }
                if(tokens[i]=="+"){
                    c=a+b;
                    
                }
                if(tokens[i]=="-"){
                    c=b-a;
                    
                }
                
                s.push(to_string(c));
                
            }
            else{
                s.push(tokens[i]);
                
            }
            
        }
        
        return stoi( s.top());
        
    }
};