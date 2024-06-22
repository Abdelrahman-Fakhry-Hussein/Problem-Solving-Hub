// Codeforces 746 D2 B Decoding.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem http://codeforces.com/contest/746/problem/B

#include <iostream>
#include <string>
using namespace std;
int main()
{
    // link of the problem http://codeforces.com/contest/746/problem/B

    int n;
    string  s = "", out = "";
    cin >> n >> s;

    if (n % 2)
    {
        out += s[0];
        s = s.substr(1, n - 1);
        n--;

    }

    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
            out = s[i - 1] + out;
        else
            out = out + s[i - 1];
    }

    cout << out << endl;

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
