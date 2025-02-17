// Longest Common Subsequence (LCS) algorithm bottom-up dynamic programming.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>
using namespace std;
string s1,s2;
vector<vector<int>> dp;
int main()
{
    cin>>s1>>s2;
    dp.assign(s1.size()+1,vector<int>(s2.size()+1,0));
    for(int i=1;i<=s1.size();i++)
    {
        for(int j = 1;j<=s2.size();j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else
            {
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    
    
    cout<<dp[s1.size()][s2.size()]<<endl;
    int i = s1.size(),j=s2.size();
    string s = "";
    while(i> 0 && j> 0)
    {
        if(s1[i-1]== s2[j-1])
        {
            s= s1[i-1] +s;
            i--;
            j--;
        }
        else if(dp[i][j] == dp[i-1][j])
        {
         i--   ;
        }
        else
            j--;
    }
    
    cout<<s<<endl;
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
