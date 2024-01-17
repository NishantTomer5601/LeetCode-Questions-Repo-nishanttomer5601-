class Solution {
public:
    string decodeString(string s) {
        int n=s.length();
       
        
        stack<char> st;
        for(int i=0;i<n;i++){
            
            if(s[i]==']' ) {
                string ans="";
                while(!st.empty() &&st.top()!='['){
                    ans+=(st.top());
                    st.pop();
                }
                st.pop();
                 reverse(ans.begin(),ans.end());
             
                string number = "";
                
                // for calculating number
                
                while(!st.empty() && isdigit(st.top())){
                    number = st.top() + number;
                    st.pop();
                }
                int k = stoi(number);
                string aa=ans;
                k--;
                while(k){
                    aa+=ans;
                    k--;
                }
                
                for(int j=0;j<aa.length();j++) st.push(aa[j]);
               
                
                
            }
           
            else {
                st.push(s[i]);
               
            }
        }
        string ss="";
        while(!st.empty()){
            ss+=(st.top());
           
            st.pop();
                      
            
            
        };
        reverse(ss.begin(),ss.end());
        
        return ss;
        
    }
};
