// CodeForces 218 D2 A. Mountain Scenery.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://codeforces.com/contest/218/problem/A

#include <iostream>
using namespace std;

int main() 
{
    // link of problem http://codeforces.com/contest/218/problem/A

    int k, n;
    cin >> k >> n;
    int* val = new int[2 * k + 2];

    for (int i = 1; i <= 2 * k + 1; i++)
    {
        cin >> val[i];
        if (i > 2 && n > 0)
        {
            if (val[i - 2]<(val[i - 1] - 1) && (val[i - 1] - 1)>val[i]) {
                val[i - 1] -= 1;
                n--;
            }
        }
    }

    for (int i = 1; i <= 2 * k + 1; i++)
    {
        std::cout << val[i] << " ";
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
