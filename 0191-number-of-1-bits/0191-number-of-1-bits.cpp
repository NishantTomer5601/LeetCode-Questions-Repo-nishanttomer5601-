class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        string s=bitset<32>(n).to_string();
        int ans=0;
        for(int i=0;i<s.length();i++) if(s[i]=='1'){cout<<ans<<" "<<i<<endl; ans++;}
        
        return ans;
        
    }
};