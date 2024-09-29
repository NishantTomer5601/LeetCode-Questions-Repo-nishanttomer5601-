class Solution {
public:
    char kthCharacter(int k) {
        string ans="a";
        string temp="a";
        while(ans.length()<k){
            //temp=ans;
            for(int i=0;i<temp.length();i++){
                char ch=ans[i];
                if(ch=='z'){
                    ans+='a';
                    continue;

                }
                else{
                ans+=(ch+1);
                // cout<<ans<<endl;
             }   //cout<<ans<<endl;
            }
            temp=ans;
  
        }

        return ans[k-1];
        
    }
};