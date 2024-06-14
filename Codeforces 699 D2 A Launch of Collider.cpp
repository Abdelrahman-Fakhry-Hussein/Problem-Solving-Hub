// Codeforces 699 D2 A Launch of Collider.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem http://codeforces.com/contest/699/problem/A

#include <iostream>
#include <climits>
using namespace std;
int main() 
{
    // link of the problem http://codeforces.com/contest/699/problem/A

    int n, r = INT_MAX, l = INT_MAX, val = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        cin >> val;
        if (s[i] == 'R')
            r = val;
        if (s[i] == 'L')
        {

            if ((val - r) > 0)
            {
                if ((val - r) / 2 < l)
                    l = (val - r) / 2;
            }
        }
    }
    if (l == INT_MAX)
        cout << -1 << endl;
    else
        cout << l << endl;


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
