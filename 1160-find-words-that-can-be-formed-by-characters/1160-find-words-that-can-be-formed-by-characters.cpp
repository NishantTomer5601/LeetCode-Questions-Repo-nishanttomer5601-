class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        vector<int> chFreq(26, 0);
        
        for(auto ch : chars) chFreq[ch - 'a']++;
        int count = 0;
        
       
        for(auto str : words){
            
            bool flag = true;
            // Create a map to store the frequency of characters in current string
            vector<int> copyFreq(26, 0);
            for(auto ch : str) {
                if(++copyFreq[ch - 'a'] > chFreq[ch - 'a']){
                    flag = false;
                    break;
                }
            }
            if(flag) count += str.size();
        }
        
       
        return count;
    }
};