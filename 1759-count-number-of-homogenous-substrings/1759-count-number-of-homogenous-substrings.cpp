// #define ll long long
// #define mod 1e9+7;

// class Solution {
// public:
//     int countHomogenous(string s) {
//         int n=s.length();
        
//         vector<int> ans;
//         int count=1;
//         int a=0;
        
//         for(int i=1;i<n;i++){
//             if(s[i]!=s[i-1]){
//                 ans.push_back(count);
//                 count=0;
//             }
//             count++;
            
//         }
        
//         for(int i=0;i<ans.size();i++){
//             int m=ans[i];
//             ll d=(m*(m+1))/2;
//             a+=d;
//         }
//         return a + (count*(count+1))/2;
//     }
// };

class Solution {
public:
    int countHomogenous(string s) {
        long long ans = 0LL; // stores ans
        int count = 1; //count current set of same characters
        for(int i = 0;i<s.length()-1;i++)
        {
            if(s[i]==s[i+1]) // matched
                count++;
            else // not matched
            {
                ans = ans + (1LL*count*(count+1))/2; //current characters can make this much subarrays
                count = 1; 
            }
        }
        ans = ans + (1LL*count*(count+1))/2;
        return ans%1000000007;
    }
};