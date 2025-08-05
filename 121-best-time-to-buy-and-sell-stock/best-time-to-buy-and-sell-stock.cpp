class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int max1=0;
        int min1=prices[0];
        for(int i=1;i<n;i++){
           if(prices[i]<min1){
            min1=prices[i];
           }
           int cost=prices[i]-min1;
           max1=max(max1,cost);
        }
        return max1;
    }
};