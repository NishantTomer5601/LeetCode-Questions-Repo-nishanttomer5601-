class Solution {
public:
    bool checkTwoChessboards(string s, string t) {
        bool x=0,y=0; //black-> 0, white-> 1
        if((s[0]-'a')%2==0){
            int  num=s[1]-'0';
            if(num%2==0) {x=1;}
            else x=0;
        }
        else{
            int  num=s[1]-'0';
            if(num%2==0) {x=0;}
            else x=1;

        }

        if((t[0]-'a')%2==0){
            int  num=t[1]-'0';
            if(num%2==0) y=1;
            else y=0;
        }
        else{
            int  num=t[1]-'0';
            if(num%2==0) {y=0;}
            else y=1;

        }

        if(x==y) return true;
        return false;
        
        
    }
};