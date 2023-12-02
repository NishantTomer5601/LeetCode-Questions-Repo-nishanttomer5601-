class Solution {
public:
    struct hash_pair {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
 
        if (hash1 != hash2) {
            return hash1 ^ hash2;             
        }
         return hash1;
    }
};
    int count,number=1,curvow,curcon;
    long long sum;
    unordered_map<pair<int,int>,long long,hash_pair> A;
    long long beautifulSubstrings(string & s, int k) {
        vector<int> prime={2,3,5,7,11,13,17,19,23,29,31};
        for(int i=0;i<=prime.size()-1;i++)
        {
            count=0;
            while(k%prime[i]==0)
            {
                count++;
                k=k/prime[i];
                if(count%2==1) number=number*prime[i];
            }
        }
        if(k!=1) number=number*k;
        A[{0,0}]=1;
        for(int i=0;i<=s.size()-1;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') curvow++;
            else curcon++;
            if(A.count({curcon-curvow,curvow%number}))
                sum+=A[{curcon-curvow,curvow%number}];
            A[{curcon-curvow,curvow%number}]++;
        }
        return sum;
    }
};