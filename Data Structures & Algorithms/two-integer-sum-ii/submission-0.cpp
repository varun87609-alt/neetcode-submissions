class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        vector<int>ans(2);
        while(i<j && nums[i]+nums[j]!=target){
            if(nums[i]+nums[j]>target){
                j--;
            }else{
                i++;
            }
        }
        ans[0]=i+1;
        ans[1]=j+1;
        return ans;
    }
};
