// Codeforces 47 D2 B Coins.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem http://codeforces.com/contest/47/problem/B

#include <iostream>
#include <map>
using namespace std;
int main()
{
    // link of the problem http://codeforces.com/contest/47/problem/B

    map<char, int> charToIntMap;
    string s = "", out = "";
    charToIntMap['A'] = 0;
    charToIntMap['B'] = 0;
    charToIntMap['C'] = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> s;
        if (s[1] == '>')
            charToIntMap[s[0]]++;

        else
            charToIntMap[s[2]]++;
    }

    for (int i = 0; i < 3; i++)
    {
        bool f = true;
        for (auto it = charToIntMap.begin(); it != charToIntMap.end(); ++it)
        {
            if (it->second == i)
            {
                out += it->first;
                f = false;
            }
        }
        if (f)
        {
            cout << "Impossible" << endl;
            return 0;
        }
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
