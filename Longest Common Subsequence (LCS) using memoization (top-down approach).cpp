// Longest Common Subsequence (LCS) using memoization (top-down approach).cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>
using namespace std;

string s1, s2;
vector<vector<int>> memo;

int dp_memo(int i, int j);

int main() {
    cin >> s1 >> s2;
    int n = s1.size(), m = s2.size();
    memo.assign(n, vector<int>(m, -1));

    cout << "LCS Length: " << dp_memo(n - 1, m - 1) << endl;

    // Backtracking to reconstruct LCS
    int i = n - 1, j = m - 1;
    string lcs = "";

    while (i >= 0 && j >= 0) {
        if (s1[i] == s2[j]) {  
            lcs = s1[i] + lcs; // Add matching character
            i--;
            j--;
        } else {
            if (i > 0 && memo[i][j] == memo[i - 1][j])
                i--; // Move up
            else
                j--; // Move left
        }
    }

    cout << "LCS: " << lcs << endl;
    return 0;
}

int dp_memo(int i, int j) {
    if (i < 0 || j < 0)
        return 0;
    if (memo[i][j] != -1)
        return memo[i][j];

    if (s1[i] == s2[j])
        return memo[i][j] = 1 + dp_memo(i - 1, j - 1);

    return memo[i][j] = max(dp_memo(i, j - 1), dp_memo(i - 1, j));
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
