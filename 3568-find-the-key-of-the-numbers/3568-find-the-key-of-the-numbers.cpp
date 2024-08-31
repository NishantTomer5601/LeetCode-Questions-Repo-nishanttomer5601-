class Solution {
public:
    int generateKey(int num1, int num2, int num3) {

        string ans="";
        string a=to_string(num1);

        if(a.length()<4){
            int x=a.length();
            string h=a;
            int y=4-x;
            while(y--){
                h="0"+h;

            }
            a=h;

        }
        

        string b=to_string(num2);


        if(b.length()<4){
            int x=b.length();
            string h=b;
            int y=4-x;
            while(y--){
                h="0"+h;

            }
            b=h;

        }
        string c=to_string(num3);

        if(c.length()<4){
            int x=c.length();
            string h=c;
            int y=4-x;
            while(y--){
                h="0"+h;

            }
            c=h;

        }
        // cout<<a<<" "<<b<<" "<<c<<" ";

        for(int i=0;i<4;i++){
            int x=(a[i])-'0';
            int y=(b[i])-'0';
            int z=(c[i])-'0';

            ans+=to_string(min(x,min(y,z)));


        }

        return stoi(ans);
        
    }
};