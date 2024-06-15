// Codeforces 287 D2 A IQ Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem http://codeforces.com/contest/287/problem/A

#include <iostream>
using namespace std;
int main()
{
    // link of the problem http://codeforces.com/contest/287/problem/A

    char arr[4][4];
    int dot = 0, hash = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            if (arr[i - 1][j - 1] == '.')
                dot++;
            else
                hash++;

            if (arr[i - 1][j] == '.')
                dot++;
            else
                hash++;

            if (arr[i][j - 1] == '.')
                dot++;
            else
                hash++;

            if (arr[i][j] == '.')
                dot++;
            else
                hash++;


            if (dot > 2 || hash > 2)
            {
                cout << "YES" << endl;
                return 0;
            }
            hash = 0;
            dot = 0;

        }
    }

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
