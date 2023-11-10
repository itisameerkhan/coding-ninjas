#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int maximumProfit(vector<int> &prices){
        int minValue = prices[0];
        int profit = 0;
        for(int i=1;i<prices.size();i++) {
            int cost = prices[i] - minValue;
            profit = max(profit, cost);
            minValue = min(minValue, prices[i]);
        }
        return profit;
    }
};
int main() {
    int n;
    cin>>n;
    vector<int> prices(n);
    for(int i=0;i<n;i++) cin>>prices[i];
    Solution sol;
    cout<<sol.maximumProfit(prices);
}

/*
 [7,1,5,3,6,4]
*/