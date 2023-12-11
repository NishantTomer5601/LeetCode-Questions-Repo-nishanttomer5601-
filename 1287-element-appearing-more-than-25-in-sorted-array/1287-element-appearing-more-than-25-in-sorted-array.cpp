class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int t=n/4;
        int count=0;
        unordered_map<int,int> map;
        for(int i=0;i<n ;i++){
            map[arr[i]]++;
            if(map[arr[i]]>t) return arr[i];            
        }
        return 0;
    }
};