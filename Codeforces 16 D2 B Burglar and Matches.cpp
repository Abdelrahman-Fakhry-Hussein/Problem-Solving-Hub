// Codeforces 16 D2 B Burglar and Matches.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem http://codeforces.com/contest/16/problem/B

#include <iostream>
#include <map>
using namespace std;

int main()
{
    // link of the problem http://codeforces.com/contest/16/problem/B

    int n = 0, val = 0, temp = 0, temp2 = 0, out = 0;
    cin >> val >> n;
    map<int, int> dictionary;

    for (int i = 0; i < n; i++)
    {
        cin >> temp >> temp2;
        auto it = dictionary.find(temp2);

        if (it != dictionary.end())
            it->second += temp;
        
        else 
            dictionary[temp2] = temp;
        
    }
    for (auto it = dictionary.rbegin(); it != dictionary.rend(); ++it) {
        if (it->second >= val)
        {
            out += val * it->first;
            break;
        }
        else
        {
            out += it->second * it->first;
            val -= it->second;
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
