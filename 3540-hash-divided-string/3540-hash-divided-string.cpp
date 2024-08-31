class Solution {
public:
    string stringHash(string s, int k) {
        string result="";

        int n=s.length();
        int count=0;
        int sum=0;
        int i=0;
        while(i<n){

            if(i!=0 && count%k==0 && count!=0){
                // sum=0;
                // sum+=(s[i]-'a');
                int rem=sum%26;
                char ch='a'+rem;
                cout<<ch<<endl;
                result+=ch;
                
                count=0;
   sum=0;

            }
            else{
                sum+=(s[i]-'a');
                cout<<s[i]-'a'<<" ";
                count++;
                i++;

            }
            
            
            
        }

        if(count!=0){
             int rem=sum%26;
                char ch='a'+rem;
                cout<<ch<<endl;
                result+=ch;
                
                count=0;
   sum=0;

        }




        return result;
        
    }
};