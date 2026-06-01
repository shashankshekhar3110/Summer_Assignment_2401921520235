// problem Name : Best Time To Buy And Sell Stock
// problem link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int buy = prices[0];
    int answer = 0;

    for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            }

          int profit = prices[i] - buy;

          if (profit > answer) {
                answer = profit;
            }
        }

       return answer;
            
    }
};
