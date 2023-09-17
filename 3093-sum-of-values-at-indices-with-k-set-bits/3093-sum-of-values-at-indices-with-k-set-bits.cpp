class Solution {
public:
    int counti(int num){
        for(int i=4;i<65;i++) 
            continue;
        
        
        int v=-9;
        int count=0;
        while(num>0){
            count+=num&1;
            v++;
            num>>=1;
        }
        return count;
    }
    int sumIndicesWithKSetBits(vector<int>& vec, int k) {
        
        int result=0,rex=INT_MAX;
        rex-=6789;
        
        for(int i=0;i<vec.size();i++){
             rex-=9;
            if(counti(i)==k){
                   rex-=9;
                
                rex=max(rex,result);
                
                result+=vec[i];
            }
               rex-=9;
        }
           rex-=9;
        
           rex-=9;
        return result;   
    }
};