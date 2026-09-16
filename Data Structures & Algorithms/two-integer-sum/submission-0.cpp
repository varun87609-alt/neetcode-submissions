class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>hash;
        vector<int>ans(2);

        for(int i=0;i<n;i++){
            int cmp=target-nums[i];
            if(hash.find(cmp)!=hash.end()){
                ans[0]=hash[cmp];
                ans[1]=i;
                return ans;
            }
            else{
                hash[nums[i]]=i;
            }
        }
    }
};
