// 0/1 Knapsack top-down (recursive with memoization).cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>
using namespace std;

int capcity, n;
vector<int> weights, profits;
vector<vector<int>> dp;

int dp_fun(int item, int weight) {
    if (item < 0 || weight == 0)
        return 0;

    if (dp[item][weight] != -1)
        return dp[item][weight];

    int val = 0;
    if (weight >= weights[item])
        val = dp_fun(item - 1, weight - weights[item]) + profits[item];

    int val2 = dp_fun(item - 1, weight);
    
    dp[item][weight] = max(val, val2);
    return dp[item][weight];
}

int main() {
    cin >> capcity >> n;
    int capcitys = capcity;

    weights.assign(n, 0);
    profits.assign(n, 0);

    for (int i = 0; i < n; i++)
        cin >> weights[i];

    for (int i = 0; i < n; i++)
        cin >> profits[i];

    dp.assign(n, vector<int>(capcity + 1, -1));

    // Solve knapsack using recursion + memoization
    int maxProfit = dp_fun(n - 1, capcity);
    cout << maxProfit << endl;

    // Backtracking to find the selected items
    for (int i = n - 1; i >= 0; i--) {
        if (i == 0) {
            if (capcitys >= weights[i] && dp[i][capcitys] != 0) {
                cout << weights[i] << " " << profits[i] << endl;
            }
        } else if (dp[i][capcitys] != dp[i - 1][capcitys]) {
            cout << weights[i] << " " << profits[i] << endl;
            capcitys -= weights[i];
            if (capcitys == 0) break;
        }
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
