// Codeforces 270 D2 A Fancy Fence.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://codeforces.com/contest/270/problem/A

#include <iostream>
using namespace std;
int main() {
    // link of problem http://codeforces.com/contest/270/problem/A
    int n, angle;
    cin >> n;
    while (n--)
    {
        cin >> angle;
        int i = 3;
        double long interior = 0;
        if (angle == 180)
            cout << "YES" << endl;
        else
        {
            while (true)
            {
                interior = ((i - 2) * 180 + 0.0) / i;

                if (angle == interior)
                {
                    cout << "YES" << endl;
                    break;
                }
                else if (angle < interior)
                {
                    cout << "NO" << endl;
                    break;
                }
                i++;
            }
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
