#include<bits/stdc++.h>

class cmp{

    public:
    bool operator()(string &a, string &b){

        return a.size()<b.size();

    }

};

class Solution {
    private:

    bool checkPossible(string &a, string &b){
        if(a.size()!= b.size()+1) return false;

        int first=0,second=0;

        while(first<a.size() && second<b.size()){
            if(a[first]==b[second]){
                first++; second++;
            }
            else{
                first++;
            }

        }

        if((first==a.size() && second==b.size()) ||  (first==a.size()-1 && second==b.size()) ) return true;
        


        return false;

    }

public:
    int longestStrChain(vector<string>& words) {
        int n=words.size();
        vector<int> dp(n,1);
        sort(words.begin(),words.end(),cmp());

        int maxi=INT_MIN;

        for(int i=0;i<n;i++){
            for(int prev=0;prev<i;prev++){
                if(checkPossible(words[i],words[prev]) && 1+dp[prev]>dp[i]){
                    dp[i]=1+dp[prev];
                }
            }
            maxi=max(maxi,dp[i]);
        }      

        return maxi;  
    }
};