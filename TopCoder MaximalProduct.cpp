// TopCoder MaximalProduct.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://topcoder.bgcoder.com/print.php?id=2141

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    // link of problem http://topcoder.bgcoder.com/print.php?id=2141

    int sums, num;
    cin >> sums >> num;
    
    vector<vector<int>> dp(sums + 1, vector<int>(num + 1, -1));

    dp[0][0] = 1;

    for(int i=1;i<=num;i++)
    {
        for(int j= 0;j<=sums;j++)
        {
            if(dp[j][i-1] > -1)
            {
                for(int k=1;k<=sums-j-(num-i);k++)
                {
                    if(j+k<=sums)
                    {
                        dp[j+k][i] = max(dp[j+k][i],dp[j][i-1]*k);
                    }
                }
            }
        }
    }
    cout<<dp[sums][num]<<endl;
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
