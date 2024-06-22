// Codeforces 102 D2 B Sum of Digits.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem http://codeforces.com/contest/102/problem/B

#include <iostream>
#include <string>
using namespace std;
int main()
{
    // link of the problem http://codeforces.com/contest/102/problem/B

    string s;
    cin >> s;
    long long int val = 0;
    int out = 0;
    if (s.size() == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    while (true)
    {

        for (int i = 0; i < s.size(); i++)
            val += (s[i] - '0');
       

        s = to_string(val);
        val = 0;
        out++;
        if (s.size() == 1)
        {
            cout << out << endl;
            return 0;
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
