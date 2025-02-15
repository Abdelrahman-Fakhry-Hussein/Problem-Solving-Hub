// 0/1 Knapsack  bottom-up dynamic programming.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>
using namespace std;
int capcity,n;
vector<int> weights, profits;
vector<vector<int>> dp;
int main()
{
	cin >> capcity >> n;
	int capcitys = capcity;
	weights.assign(n, 0);
	profits.assign(n, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> weights[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> profits[i];
	}
	
	dp.assign(n+1, vector<int>(capcity + 1, 0));

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= capcity; j++)
		{
		 
			if (weights[i-1] <= j)
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weights[i-1]] + profits[i-1]);
			else
			    dp[i][j]=dp[i-1][j];
		}
	}
	cout << dp[n][capcity] << endl;
	for(int i=n;i>=1;i--)
	{
	    
	    if(dp[i][capcitys] != dp[i-1][capcitys])
	        {
	            cout<<weights[i-1]<<" "<<profits[i-1]<<endl;
	            capcitys-=weights[i-1];
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
