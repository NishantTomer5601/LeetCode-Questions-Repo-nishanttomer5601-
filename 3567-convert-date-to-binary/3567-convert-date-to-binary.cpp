#include<bits/stdc++.h>
class Solution {
public:

string DecimalToBinary(int num){
    string s;
    while(num){
        if(num&1)
            s+='1';
        else
            s+='0';
        num>>=1;
        
        
    }
return s;
}

    string convertDateToBinary(string date) {
        vector<int> v;
        string y=date.substr(0,4);
        string m=date.substr(5,2);
        string d=date.substr(8,2);
        v.push_back(stoi(y));
        v.push_back(stoi(m));
        v.push_back(stoi(d));  
        // cout<<v[0]<<"-"<<v[1]<<"-"<<v[2]<<endl;

        string ans="";
        for(int i=0;i<v.size();i++){
            string s=DecimalToBinary(v[i]);
            reverse(s.begin(),s.end());
            ans+=(s+'-');

        }
       

ans.pop_back();


        return ans;    
    }
};