class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>hash;
        int n=s.size();
        int left=0;
        int ans=0;
        for(int right=0;right<n;right++){
            char c=s[right];
            if(hash.find(c)!=hash.end()){
                left=max(left,hash[c]+1);
            }
            hash[c]=right;
            ans=max(ans,right-left+1);


        }
        return ans;
    }
};
