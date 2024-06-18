// Codeforces 579 D2 A Raising Bacteria.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem http://codeforces.com/contest/579/problem/A

#include <iostream>
using namespace std;
int main() 
{
    // link of the problem http://codeforces.com/contest/579/problem/A

    int n, out = 0, e = -1;
    cin >> n;

    while (true)
    {
        int sum = 1;
        for (int i = 1; i < 50; i++)
        {
            
            if (sum > n)
            {
                out++;
                n -= (sum / 2);
                break;
            }
            else if (sum == n)
            {
                out++;
                n -= sum;
                break;
            }
            else
            {
                sum *= 2;
            }
        }

        if (n == 0)
        {
            break;
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
