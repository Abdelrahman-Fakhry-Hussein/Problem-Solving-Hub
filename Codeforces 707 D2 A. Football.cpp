// Codeforces 707 D2 A. Football.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> val;
    string inp;

    for (int i = 0; i < n; i++)
    {
        cin >> inp;
        val[inp] += 1;
    }

    auto firstElement = val.begin();
    auto secondElement = ++val.begin();

    if (firstElement != val.end() && secondElement != val.end())
    {
        if (firstElement->second > secondElement->second)
        {
            cout << firstElement->first << endl;
        }
        else
        {
            cout << secondElement->first << endl;
        }
    }
    else if (secondElement == val.end())
        cout << firstElement->first << endl;

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
