// TopCoder 6680 RGBStreet Second Solution.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem https://vjudge.net/problem/TopCoder-6680

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
vector<vector<int>> v; // 2D vector to store integer values
vector<vector<long long >> memo;
int n = 0;
long long  dp(int i, int  prev);
int main() 
{
    // link of problem https://vjudge.net/problem/TopCoder-6680

    vector<string> input = {"71 39 44", "32 83 55", "51 37 63", "89 29 100", "83 58 11", "65 13 15", "47 25 29", "60 66 19"};

    for (const string &line : input) {
        stringstream ss(line);
        vector<int> row;
        int num;
         n+=1;
        while (ss >> num) { // Extract integers from the string
            row.push_back(num);
        }

        v.push_back(row); // Store row in the 2D vector
    }
    memo.assign(n, vector<long long >(4, -1));
    
    cout<<dp(0,3)<<endl;
    return 0;
}
// 0 -> R
// 1 -> G
// 2 -> B
long long  dp(int i, int  prev)
{
    if(i == n)
    {
        return 0;
    }
    if(memo[i][prev] != -1)
      return memo[i][prev];
      
    
    long long  valR = 100000000000, valG  = 100000000000,valB  = 100000000000;
    if(prev == 3 || prev != 0)
    {
        valR = v[i][0]+dp(i+1,0);
    }
    if(prev == 3 || prev != 1)
    {
        valG = v[i][1]+dp(i+1,1);
    }
    if(prev == 3 || prev != 2)
    {
        valB = v[i][2]+dp(i+1,2);
    }
    //cout<<i<<" "<<prev<<endl;
    memo[i][prev] = min(valR,min(valG,valB));
    return memo[i][prev] ;
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
