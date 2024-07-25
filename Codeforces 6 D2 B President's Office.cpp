// Codeforces 6 D2 B President's Office.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem http://codeforces.com/contest/6/problem/B

#include <iostream>
#include <vector>
#include <set>
#include <tuple>
using namespace std;
int main()
{
    // link of the problem http://codeforces.com/contest/6/problem/B

    set<tuple<int, int>>v;
    set<char> val;
    int m = 0, n = 0;
    char c;

    cin >> m >> n >> c;
    char** arr = new char* [m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new char[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == c)
            {
                if (i != 0)
                {
                    v.insert(make_tuple(i - 1, j));
                }
                if (i != m - 1)
                {
                    v.insert(make_tuple(i + 1, j));
                }
                if (j != 0)
                {
                    v.insert(make_tuple(i, j - 1));
                }
                if (j != n - 1)
                {
                    v.insert(make_tuple(i, j + 1));
                }
            }
        }
    }
    //    std::cout << "List of points:" << std::endl;
    for (const auto& point : v) {
        int x, y;
        tie(x, y) = point;
        if (arr[x][y] != '.' && arr[x][y] != c)
            val.insert(arr[x][y]);
        // std::cout << "(" << x << ", " << y << ")" << std::endl;
    }

    cout << val.size() << endl;

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
