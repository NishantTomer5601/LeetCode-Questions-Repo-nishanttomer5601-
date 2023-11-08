class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int steps=0,time=t;

        
         if(sx==fx && sy==fy && t==1) return false;
        if(sx==fx && sy==fy ) return true;

        
        steps = max(abs(sy-fy),abs(sx-fx));
        if(steps <=time)
        {
            return true;
        }
        
        else
        {
            return false;
        } 
    
        if(sx==fx && sy==fy) return true;
        return false;
        
    }
};