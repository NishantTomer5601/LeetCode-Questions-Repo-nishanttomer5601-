class Solution {
private:
    bool checkPalindrome(string w){
        int n=w.length();
        int i=0,j=n-1;
        while(i<j){
            if(w[i++]==w[j--]) continue;
            return false;
            
        }
        return true;
        
    }
    
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        string ans="";
        
        for(int i=0;i<n;i++){
            for(int j=0;j<words[i].length();j++){
                if(checkPalindrome(words[i])) return words[i];
            }
        }
        
        return ans;
        

            
    }
};