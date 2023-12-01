class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int n=s.length();
        
        int ans=0;
        for(int i=0;i<n;i++){
            char c=s[i];
         //   string ch="";
          //  ch=ch+c;
          //  cout<<ch<<endl;
            int a=0,b=0;
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') {a=1;b=0;}
            else{
                a=0;b=1;
            }
            for(int j=i+1;j<n;j++){
                char ch=s[j];
                if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                    a++;
                }
                else{
                    b++;
                }
                
                
                if(a==b && (a*b)%k==0)ans++;
            }
            
        }
        return ans;
    }
};