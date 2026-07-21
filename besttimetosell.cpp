#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices)
{
    int maxProfit = 0;

    for(int i = 0; i < prices.size(); i++)
    {
        for(int j = i + 1; j < prices.size(); j++)
        {
            if(prices[j] > prices[i])
            {
                maxProfit = max(maxProfit, prices[j] - prices[i]);
            }
        }
    }

    return maxProfit;
}

int main()
{
    vector<int> prices = {7,1,5,3,6,4};

    cout << maxProfit(prices);
}