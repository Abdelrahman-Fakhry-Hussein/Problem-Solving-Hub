// Codeforces 433 D2 B Kuriyama Mirai's Stones.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem http://codeforces.com/contest/433/problem/B

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    // link of the problem http://codeforces.com/contest/433/problem/B

    long long int length = 0, temp = 0, t2 = 0, t3 = 0;
    cin >> length;
    vector<long long int> v(length + 1);
    v[0] = 0;
    for (long long int i = 1; i <= length; i++)
    {
        cin >> temp;
        v[i] = temp;
    }
    vector<long long int> v2 = v;
    sort(v2.begin(), v2.end());
    for (long long int i = 1; i <= length; i++)
    {
        v[i] += v[i - 1];
        v2[i] += v2[i - 1];
    }
    cin >> length;
    for (long long int i = 0; i < length; i++)
    {
        cin >> temp >> t2 >> t3;
        if (temp == 1)
        {
            cout << v[t3] - v[t2 - 1] << endl;
        }
        else
        {
            cout << v2[t3] - v2[t2 - 1] << endl;
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
