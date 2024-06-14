// Codeforces 382 D2 A Ksenia and Pan Scales.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem http://codeforces.com/contest/382/problem/A

#include <iostream>
using namespace std;
int main()
{
    // link of the problem http://codeforces.com/contest/382/problem/A

    string str, inp;
    cin >> str >> inp;
    int pos = str.find('|');

    string part1 = str.substr(0, pos);
    string part2 = str.substr(pos + 1);


    if (part1.length() > part2.length() && part1.length() - part2.length() <= inp.length() && (inp.length() - (part1.length() - part2.length())) % 2 == 0)

        cout << part1 << inp.substr(part1.length() - part2.length() + ((inp.length() - (part1.length() - part2.length()))) / 2) << '|' << part2 << inp.substr(0, part1.length() - part2.length() + ((inp.length() - (part1.length() - part2.length()))) / 2) << endl;

    else if (part1.length() < part2.length() && part2.length() - part1.length() <= inp.length() && (inp.length() - (part2.length() - part1.length())) % 2 == 0)
   
        cout << part1 << inp.substr(0, part2.length() - part1.length() + ((inp.length() - (part2.length() - part1.length()))) / 2) << '|' << part2 << inp.substr(part2.length() - part1.length() + ((inp.length() - (part2.length() - part1.length()))) / 2) << endl;

    else if (inp.length() % 2 == 0 && part1.length() == part2.length())
        cout << part1 << inp.substr(0, inp.length() / 2) << '|' << part2 << inp.substr(inp.length() / 2) << endl;
    else
        cout << "Impossible" << endl;


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
