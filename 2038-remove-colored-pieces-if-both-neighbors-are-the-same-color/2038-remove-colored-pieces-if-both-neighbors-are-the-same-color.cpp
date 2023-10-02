class Solution {
public:
    bool winnerOfGame(string col) {
        int n=col.length();
        int ca=0,cta=0;
        vector<int> a;
        vector<int> b;
        int cb=0,ctb=0;
        for(int i=0;i<n;i++){
            char ch=col[i];
            if(ch=='A'){
                if(cb>=3) b.push_back(cb);
                cb=0;
                
                ca++;
                
                
            }
            else{
                if(ca>=3) a.push_back(ca);
                ca=0;
                
                cb++;
                
            }
        }
        if(cb>=3) b.push_back(cb);
        if(ca>=3) a.push_back(ca);
        
        for(int i=0;i<a.size();i++){
            if(a[i]==3)cta++;
            if(a[i]>3) cta+=(a[i]-2);
        }
        for(int i=0;i<b.size();i++){
            if(b[i]==3)ctb++;
            if(b[i]>3) ctb+=(b[i]-2);
        }
        if(cta==0) return false;
        
        while(cta!=0 && ctb!=0){
            cta--;
            ctb--;
            
        }
        if(cta==0) return false;
        
        return true;
        
    }
};