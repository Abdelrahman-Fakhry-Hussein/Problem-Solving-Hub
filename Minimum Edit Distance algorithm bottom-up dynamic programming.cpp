// Minimum Edit Distance algorithm bottom-up dynamic programming.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int n = s1.size(), m = s2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    // Fill DP table
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0)
                dp[i][j] = j;  // Insert all characters from s2
            else if (j == 0)
                dp[i][j] = i;  // Delete all characters from s1
            else if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];  // No cost if chars match
            else
                dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
        }
    }

    cout << "Minimum Edit Distance: " << dp[n][m] << endl;

    // Print DP table
    cout << "\nDP Table:\n";
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++)
            cout << dp[i][j] << " ";
        cout << endl;
    }

        int i = n, j = m;
    while (i > 0 || j > 0) {
        if (i > 0 && j > 0 && s1[i - 1] == s2[j - 1]) {
            cout << "Keep " << s1[i - 1] << endl;
            i--; j--;
        }
        else if (i > 0 && j > 0 && dp[i][j] == dp[i - 1][j - 1] + 1) {
            cout << "Replace " << s1[i - 1] << " -> " << s2[j - 1] << endl;
            i--; j--;
        }
        else if (i > 0 && (j==0 || dp[i][j] == dp[i-1][j]+1)) {
            cout << "Delete " << s1[i - 1] << endl;
            i--;
        }
        else if (j > 0 && (i==0 || dp[i][j] == dp[i][j-1]+1)) {
            cout << "Insert " << s2[j - 1] << endl;
            j--;
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
