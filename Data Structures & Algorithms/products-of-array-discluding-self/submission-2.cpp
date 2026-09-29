class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        int suffix=1;
        ans[0]=1;
        for(int i=1; i<n;i++){
            suffix=suffix*nums[i-1];
            ans[i]=suffix;
        }
        int prefix=1;
        for(int i=n-2;i>=0;i--){
            prefix=prefix*nums[i+1];
            ans[i]=ans[i]*prefix;
        }
        return ans;
    }
};
