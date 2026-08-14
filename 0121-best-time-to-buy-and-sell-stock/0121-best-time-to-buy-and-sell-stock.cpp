class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxPrice = 0;
        int n = prices.size();
        for(int i=1; i<n; i++){
            minPrice = min(minPrice,prices[i]);
            int profit = prices[i] - minPrice;
            maxPrice = max(maxPrice, profit);

        }
        return maxPrice;
    }
};