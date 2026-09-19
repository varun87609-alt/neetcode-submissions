class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        int n=nums.size();
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
    
// int n=nums.size();
    vector<vector<int>>bucket(n+1);
    for(auto &it: count){
        int num=it.first;
        int freq=it.second;

        bucket[freq].push_back(num);
    }
    vector<int>result;
    
    for(int freq=n;freq>0;freq--){
        for(int num: bucket[freq]){
        result.push_back(num);
        if(result.size()==k){
            return result;
        }}
    }

return result;
}};
