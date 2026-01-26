#include <bits/stdc++.h>
using namespace std;

void maxProfitFinder(vector<int>& prices, int i, int& minPrice, int& maxProfit) {
    if (i == prices.size()) return;

    // Update minimum price so far
    minPrice = min(minPrice, prices[i]);

    // Calculate profit if sold today
    int todaysProfit = prices[i] - minPrice;
    maxProfit = max(maxProfit, todaysProfit);

    // Recursive call
    maxProfitFinder(prices, i + 1, minPrice, maxProfit);
}

int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    maxProfitFinder(prices, 0, minPrice, maxProfit);
    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit: " << maxProfit(prices) << endl;
    return 0;
}
