// Codeforces 545 D2 C Woodcutters third Solution.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://codeforces.com/contest/545/problem/C

#include <iostream>
#include <vector>
using namespace std;


int main() 
{
    // link of problem http://codeforces.com/contest/545/problem/C

    int n;
    cin >> n ;
    
    vector<long long> x(n), h(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> h[i];
    }
    
   
    vector<vector<int>> dp(n, vector<int>(3, 0));
    dp[0][1]=1;
    
    
    for(int i = 1;i<n;i++)
    {
        dp[i][0] = max(dp[i-1][0],max(dp[i-1][1],dp[i-1][2]));
        if(x[i]-h[i] > x[i-1])
        {
            dp[i][1] = max(dp[i-1][0],dp[i-1][1])+1;
        }
        if(x[i]-h[i] >  x[i-1]+h[i-1] &&  x[i]-h[i] > x[i-1])
        {
            dp[i][1] = max(dp[i][1],dp[i-1][2]+1);

        }
        
        if(i == n-1 || x[i]+h[i] < x[i+1])
            dp[i][2] = max(dp[i-1][0],max(dp[i-1][1],dp[i-1][2]))+1;
            
    }

    cout << max(dp[n - 1][0],max(dp[n - 1][1], dp[n - 1][2]) ) << endl;

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
