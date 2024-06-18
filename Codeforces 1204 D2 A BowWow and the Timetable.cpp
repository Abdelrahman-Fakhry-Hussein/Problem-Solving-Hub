// Codeforces 1204 D2 A BowWow and the Timetable.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem https://codeforces.com/contest/1204/problem/A

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // link of the problem https://codeforces.com/contest/1204/problem/A

    string s;
    cin >> s;

    int count = 0;
    for (char c : s) {
        if (c == '1') {
            count++;
        }
    }
    if (count > 1)
        cout << (s.length() + 1) / 2 << endl;

    else
        cout << (s.length()) / 2 << endl;
    
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
