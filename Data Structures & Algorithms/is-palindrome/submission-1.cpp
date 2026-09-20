class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        for(int c=0, d=n-1;c<=d;c++,d--){
            while(c<d && !isalnum(s[d])){
                d--;
            }
            while(c<d && !isalnum(s[c])){
                c++;
            }
            if(tolower(s[c])!=tolower(s[d])){
                return false;
            }
        }
        return true;
    }
};
