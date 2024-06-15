// Codeforces 289 D2 A Polo the Penguin and Segments.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem http://codeforces.com/contest/289/problem/A

#include <iostream>
using namespace std;
int main() 
{
    // link of the problem http://codeforces.com/contest/289/problem/A

    int n, k, val1, val2, out = 0;
    cin >> n >> k;

    for (int i = 0; i < n; ++i)
    {
        cin >> val1 >> val2;
        out += val2 - val1 + 1;
    }

    if (out % k)
        cout << k - out % k << endl;
    else
        cout << 0 << endl;


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
