#include<bits/stdc++.h>

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& arr) {
        int n=arr.size();
    int maxelement=INT_MIN;
    int maxIndex=0;
    sort(arr.begin(),arr.end());
    vector<int> dp(n,1),hash(n);

    for(int i=0;i<n;i++){
        hash[i]=i;
    }

    for(int i=1;i<n;i++){
        for(int prev=0;prev<i;prev++){
            if(arr[i]%arr[prev]==0 && 1+dp[prev]>dp[i]){
                dp[i]=1+dp[prev];
                hash[i]=prev;
            }
        }
        if(maxelement<dp[i]){
        maxelement=max(maxelement,dp[i]);
        maxIndex=i;
        }
    }

    vector<int> temp;
    temp.push_back(arr[maxIndex]);
    int index=0;

    while(hash[maxIndex]!=maxIndex){
        maxIndex=hash[maxIndex];
        temp.push_back(arr[maxIndex]);
    }




    return temp;
        
    }
};