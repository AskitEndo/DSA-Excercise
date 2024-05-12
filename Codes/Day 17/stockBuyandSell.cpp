// buy stock and lowest and sell at highest
// Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/


#include<bits/Stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices){
    if (prices.empty()) return 0;
    int minPrice = prices[0];
    int maxProfit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        maxProfit = max(maxProfit, prices[i]-minPrice);
        minPrice = min(minPrice, prices[i]);

    }
        return maxProfit;
    
}

int main()
{
    vector<int> res = {8,5,3,2,1,8};
    cout<<maxProfit(res);
    return 0;
}