// LIS – Longest Increasing Subsequence.cpp : This file contains the 'main' function. Program execution begins and ends there.

// LIS – Longest Increasing Subsequence
#include <iostream>
#include<vector>
using namespace std;
int n;
vector <int> v;
vector<vector<int>> memo;
int dp(int i, int prev_index);
int main()
{

    cin >> n;
    v.assign(n, -1);
    memo.assign(n + 1, vector<int>(n + 1, 0));
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            memo[i][j] = memo[i - 1][j];  // Skip current element

            if (j == 0 || v[i - 1] > v[j - 1])
                memo[i][i] = max(memo[i][i], memo[i - 1][j] + 1);
        }
    }
    cout << memo[n][n] << endl;
    //cout << dp(0,-1)<<endl;

    return 0;
}
int dp(int i, int prev_index)
{
    if (i == n)
        return 0;
    if (memo[i][prev_index + 1] != -1)
        return memo[i][prev_index + 1];
    int val1 = 0;

    if (prev_index == -1 || v[i] >= v[prev_index])
        val1 = dp(i + 1, i) + 1;
    int val2 = dp(i + 1, prev_index);
    memo[i][prev_index + 1] = max(val1, val2);
    return memo[i][prev_index + 1];

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
