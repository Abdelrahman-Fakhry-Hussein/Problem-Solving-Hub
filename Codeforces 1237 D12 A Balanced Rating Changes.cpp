// Codeforces 1237 D12 A Balanced Rating Changes.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem https://codeforces.com/contest/1237/problem/A

#include <iostream>
using namespace std;

int main()
{
    // link of the problem https://codeforces.com/contest/1237/problem/A

    int n, F_P = 1, F_N = -1;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2)
        {
            if (arr[i] > 0)
            {
                if (F_P == 1)
                {
                    cout << arr[i] / 2 + F_P << endl;
                    F_P = 0;
                }
                else
                {
                    cout << arr[i] / 2 + F_P << endl;
                    F_P = 1;
                }
            }
            else if (arr[i] < 0)
            {
                if (F_N == -1)
                {
                    cout << arr[i] / 2 + F_N << endl;
                    F_N = 0;
                }
                else
                {
                    cout << arr[i] / 2 + F_N << endl;
                    F_N = -1;
                }
            }
        }
        else

            cout << arr[i] / 2 << endl;

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
