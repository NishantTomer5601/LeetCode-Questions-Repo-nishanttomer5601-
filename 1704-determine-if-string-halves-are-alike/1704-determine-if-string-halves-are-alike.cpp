class Solution {
public:
    
    bool isVowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') return true;
        return false;
    }
    bool halvesAreAlike(string s) {
        int n=s.length();
       transform(s.begin(), s.end(), s.begin(), ::tolower);
        int count1=0,count2=0;
        for(int i=0;i<n;i++){
            if(i<n/2){
                if(isVowel(s[i])) count1++;
                
            }
            else{
                if(isVowel(s[i])) count2++;
                
            }
            
        }
        if(count1==count2) return true;
        return false;
    }
};