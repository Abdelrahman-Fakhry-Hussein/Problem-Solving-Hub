// Codeforces 463 D2 B Caisa and Pylons.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem http://codeforces.com/contest/463/problem/B

#include <iostream>
using namespace std;
int main()
{
    // link of the problem http://codeforces.com/contest/463/problem/B

    int n = 0, out = 0, curr = 0, val = 0;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (curr - arr[i] >= 0)
            out += curr - arr[i];
        else
        {
            if ((out + (curr - arr[i])) < 0)
            {
                val += out + (curr - arr[i]);
                out = 0;
            }
            else
                out += (curr - arr[i]);
            
        }

        curr = arr[i];
    }

    cout << -1 * val << endl;


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
