// Online Judge UVA 412 - Pi.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=353

#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int gcd(int a, int b);
int main()
{
    // link of the problem https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=353

    int n = 0;
    int arr[50];
    while (cin >> n && n != 0)
    {
        int out = 0;
        int total = n * (n - 1) / 2;

        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            for (int ii = i + 1; ii < n; ii++)
            {
                int val = gcd(arr[i], arr[ii]);
                if (val == 1)
                    out++;
            }
        }

        if (!out)
            cout << "No estimate for this data set." << endl;
        else
            cout << fixed << setprecision(6) << sqrt((total * 6.0) / out) << endl;
    }
    return 0;
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
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
