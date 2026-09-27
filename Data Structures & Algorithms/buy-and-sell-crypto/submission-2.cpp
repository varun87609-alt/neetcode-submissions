class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        // for(int i=0;i<n;i++){

        // }
        int i=0;
        int j=i+1;
        int profit=0;
        while(i<j && j<n){
            int dif=prices[j]-prices[i];
            profit=max(profit,dif);
            if(prices[j]<prices[i]){
                i=j;
                j=j+1;
            }else if(prices[j]>=prices[i]){
                j++;
            }
        }
        return profit;
    }
};
