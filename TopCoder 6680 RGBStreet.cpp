// TopCoder 6680 RGBStreet.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem https://vjudge.net/problem/TopCoder-6680

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
vector<vector<int>> v; // 2D vector to store integer values
vector<vector<long long >> memo;
int n = 0;
// 0 -> R
// 1 -> G
// 2 -> B
int main()
{
    // link of problem https://vjudge.net/problem/TopCoder-6680

    vector<string> input = { "71 39 44", "32 83 55", "51 37 63", "89 29 100", "83 58 11", "65 13 15", "47 25 29", "60 66 19" };

    for (const string& line : input) {
        stringstream ss(line);
        vector<int> row;
        int num;
        n += 1;
        while (ss >> num) { // Extract integers from the string
            row.push_back(num);
        }

        v.push_back(row); // Store row in the 2D vector
    }
    memo.assign(n, vector<long long >(3, 0));
    memo[0][0] = v[0][0];
    memo[0][1] = v[0][1];
    memo[0][2] = v[0][2];
    for (int i = 1; i < n; i++)
    {


        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
                memo[i][j] = min(memo[i - 1][1], memo[i - 1][2]) + v[i][j];
            if (j == 1)
                memo[i][j] = min(memo[i - 1][0], memo[i - 1][2]) + v[i][j];
            if (j == 2)
                memo[i][j] = min(memo[i - 1][0], memo[i - 1][1]) + v[i][j];

        }

    }
    cout << min(memo[n - 1][0], min(memo[n - 1][1], memo[n - 1][2])) << endl;


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
