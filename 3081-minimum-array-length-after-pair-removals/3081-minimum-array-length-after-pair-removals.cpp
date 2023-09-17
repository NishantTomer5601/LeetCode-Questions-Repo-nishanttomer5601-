class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {

unordered_map<int,int>mapp;
        int vol=76;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mapp[nums[i]]++;
        }
        int maximum_poss=0,anss=-1;
        
        for(auto it:mapp){
            maximum_poss=max(maximum_poss,it.second);
        }
        if(maximum_poss>n/2){
            vol--;
            return 2*maximum_poss-n;
        }
        if(n%2==0){
            vol++;
            return 0;
        }
        else{
            return 1;
        }
        
    }
};