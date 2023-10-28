class Solution {
  private:
  int mod = 1e9+7;
typedef long long ll;

ll mod_(ll a){
	return ((a%mod + mod) % mod);
}

ll add(ll a , ll b){
	return mod_(mod_(a) + mod_(b));
}

int f(int ch, int len, int n,vector<vector<ll>>&dp){
	if(len >= n) return 1;
	if(dp[ch][len] != -1) return dp[ch][len];
	ll ans = 0;
	if(ch == 0){
		ans = add (ans , f(1 , len+1 , n,dp));
	}
	else if (ch == 1){
		ans =  add(add(ans,f(0 , len+1 , n,dp)) , f(2 , len+1 , n,dp));
	}
	else if(ch == 2){
		ans = add(add(add(add(ans , f(0 , len+1 , n,dp)) , f(1 , len+1 , n,dp)) , f(3 , len+1 , n,dp)) , f(4 , len+1 , n,dp));
	}
	else if(ch == 3){
		ans =  add(add(ans , f(2 , len+1 , n,dp)) , f(4 , len+1 , n,dp));
	}
	else{
		ans =   add(ans,f(0 , len+1 , n,dp));
	}
	return dp[ch][len] = ans;
}
public:
    int countVowelPermutation(int n) {
       vector<vector<ll>>dp(5 , vector<ll>(n+1 , -1));
    return add(add(add(add(f(0 , 1 , n,dp), f(1 , 1 , n,dp)),f(2 , 1 , n,dp)) ,  f(3 , 1 , n,dp)) , f(4 , 1 , n,dp)); 
    }
};