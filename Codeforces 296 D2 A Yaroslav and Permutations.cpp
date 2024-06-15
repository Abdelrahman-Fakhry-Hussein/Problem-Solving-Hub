// Codeforces 296 D2 A Yaroslav and Permutations.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem http://codeforces.com/contest/296/problem/A


#include <iostream>
#include <map>
using namespace std;
int main() 
{  
    // link of the problem http://codeforces.com/contest/296/problem/A

    map<int, int> M;

    int n, val, max = 0, out = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        if (M.find(val) != M.end()) {

            M[val] += 1;
        }
        else {

            M[val] = 1;
        }
    }


    for (const auto& pair : M) {

        if (pair.second > max)
        {
            out += max;
            max = pair.second;
        }
        else
        {
            out += pair.second;
        }

    }

    if (out - max >= -1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

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
