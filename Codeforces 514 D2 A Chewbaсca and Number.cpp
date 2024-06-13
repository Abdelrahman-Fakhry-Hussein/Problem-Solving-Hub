// Codeforces 514 D2 A Chewbaсca and Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://codeforces.com/contest/514/problem/A

#include <iostream>
#include <string>
using namespace std;
int main()
{
    // link of problem http://codeforces.com/contest/514/problem/A

    string s, out = "";
    cin >> s;
    if ((s[0] - '0') == 9)
        out += s[0];
    else if ((s[0] - '0') < 5)
        out += s[0];
    else
        out += std::to_string(9 - (s[0] - '0'));;
    for (int i = 1; i < s.length(); i++) {
        if ((s[i] - '0') < 5)
        {
            out += s[i];
        }
        else
        {
            out += std::to_string(9 - (s[i] - '0'));
        }

    }
    std::cout << out << std::endl;
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
