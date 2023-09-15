class Solution {
public:
  int firstMissingPositive(vector<int> a) {
    
   /* int i,n=a.size();
    for(i=0;i<n;i++)
        if(a[i]<=0 || a[i]>n)
            a[i] = INT_MAX;

    a.push_back(INT_MAX);
    for(i=0;i<n;i++)
    {
        if(abs(a[i])==INT_MAX) continue;
        
        if(a[abs(a[i])]>0)
            a[abs(a[i])] *= -1;
    }
    for(i=1;i<=n;i++)
        if(a[i]>0)
            break;
    
    return i;*/



   // Brute Force Approach....
/*
    int i;
    vector<int> v;


    for(int i=1;i<=a.size();i++){
        for(int j=0;j<a.size();j++){
            if(a[j]==i && v.size()==i-1){
                
                v.push_back(i);
                
            }
        }
        if(v.size()!=i){
            v.push_back(-1);
        }
    }
int k;
    for( k=0;k<v.size();k++){
      //  for(int j=0;j<v.size();j++){
        if(v[k]!=k+1){
            return k+1;
        }
       // }
    }
    return k+1;
    */

    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]<=0 || a[i]>n){
            a[i]=n+1;
        }
    }
    for(int j=0;j<n;j++){
        if(abs(a[j])>n) continue;

    else{
       int curr= abs(a[j]);
       curr--;
        if(a[curr]>0){
            a[curr]=-a[curr];
        }
    }

    }
    for(int j=0;j<n;j++){
        if(a[j]>0) return j+1;

    }
return n+1;
   
}
};
