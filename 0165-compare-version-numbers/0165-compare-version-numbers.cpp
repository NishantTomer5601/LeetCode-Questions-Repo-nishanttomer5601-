class Solution {
public:
    int compareVersion(string v, string vv) {
        vector<int> x,xx;
        string a="";
        int num=0;
        for(int i=0;i<v.length();i++){
            if(v[i]=='.'){
                x.push_back(num);
                num=0;
                continue;
            }
            else{
                int z=v[i]-'0';
                num=num*10+z;
            }
        }
        x.push_back(num);
        num=0;

       for(auto it:x) cout<<it<<" ";
cout<<endl;
      for(int i=0;i<vv.length();i++){
            if(vv[i]=='.'){
                xx.push_back(num);
                num=0;
                continue;
            }
            else{
                int z=vv[i]-'0';
                num=num*10+z;
            }
        }
        xx.push_back(num);
        num=0;

        for(auto it:xx) cout<<it<<" ";

        for(int i=0;i<x.size() && i< xx.size(); i++){
            if(x[i]>xx[i]) return 1;
            else if(xx[i]>x[i]) return -1;
        }

         int j=x.size();int jj=xx.size();
        if(x.size()<xx.size()){
            while(j<xx.size()){
                if(xx[j]>0) return -1;
                j++;
            }

        }
        else if(xx.size()<x.size()){
            while(jj<x.size()){
                if(x[jj]>0) return 1;
                jj++;
            }

        }



        return 0;
        
    }
};