// Codeforces 227 D2 B Effective Approach.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem http://codeforces.com/contest/227/problem/B

#include <iostream>
#include <map>
using namespace std;
int main()
{
    // link of the problem http://codeforces.com/contest/227/problem/B

    map<int, int> dictionary;
    long long n, m, V = 0, P = 0, temp = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        dictionary[temp] = i;
    }
    cin >> m;

    for (int k = 0; k < m; k++)
    {
        cin >> temp;
        V += dictionary[temp];
        P += n - (dictionary[temp] - 1);
    }

    cout << V << " " << P << endl;

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
