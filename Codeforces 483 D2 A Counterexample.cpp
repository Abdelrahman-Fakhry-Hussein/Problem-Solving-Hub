// Codeforces 483 D2 A Counterexample.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://codeforces.com/contest/483/problem/A

#include <iostream>
using namespace std;
int main() {
    // link of problem http://codeforces.com/contest/483/problem/A

    long long l, r;
    std::cin >> l >> r;
    int diff = r - l;
    if (diff > 1)
    {
        if (diff == 2 && l % 2)
        {
            cout << -1 << endl;

        }
        else if (l % 2)
        {
            cout << l + 1 << " " << l + 2 << " " << l + 3 << endl;
        }
        else
        {
            cout << l << " " << l + 1 << " " << l + 2 << endl;
        }
    }
    else
    {
        cout << -1 << endl;
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
