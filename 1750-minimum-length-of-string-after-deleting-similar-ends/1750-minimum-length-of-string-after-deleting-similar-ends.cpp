class Solution {
public:
    int minimumLength(string s) {
        int n=s.length();
        cout<<n<<endl;
        int i=0,j=n-1;
        while(i<j){
            if(s[i]!=s[j]) break;
            else{
                char  ch=s[i];
                while(i<n && s[i]==ch)i++;
                while(j>=0 && s[j]==ch)j--;
            }
        }
        cout<<i<<" "<<j<<" "<<endl;
 return j-i+1>=0?j-i+1:0;
    }
};