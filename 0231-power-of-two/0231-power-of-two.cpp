class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool check=true;
        if(n==0) return false;
        
        while(n!=1){
            if(n&1){
                check=false;
                break;
            }
            n/=2;
        }
        
        
        return check;
        // if(n&1) return false;
        // float x=log(n)/log(2);
        // cout<<x<<" "<<endl;
        // if(ceil(x)==floor(x)) return true;
        // return false;
    }
};