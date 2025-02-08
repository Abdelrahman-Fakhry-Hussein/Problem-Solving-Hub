// Codeforces 699 D2 C Vacations.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://codeforces.com/contest/699/problem/C

#include <iostream>
#include <cstring>
using namespace std;
int rec(int* arr, int last_option, int index);
int n;
int out[100][4];
int main()
{
    // link of problem http://codeforces.com/contest/699/problem/C

    memset(out, -1, sizeof(out));

    cin >> n;
    int* arr = new int[n]();
    for (int i = 0; i < n; i++)
        cin >> arr[i];


    cout << rec(arr, 0, 0) << endl;
    return 0;
}

int rec(int* arr, int last_option, int index)
{
    if (index == n)
        return 0;
    if (out[index][last_option] != -1)
        return out[index][last_option];

    if (!arr[index] || arr[index] == last_option)
    {
        out[index][last_option] = 1 + rec(arr, 0, index + 1);
        return out[index][last_option];
    }
    else
    {
        if (arr[index] == 3)
        {
            if (last_option == 1)
            {
                out[index][last_option] = rec(arr, 2, index + 1);
                return out[index][last_option];
            }
            else if (last_option == 2)
            {
                out[index][last_option] = rec(arr, 1, index + 1);
                return out[index][last_option];
            }
            else
            {
                int m1 = rec(arr, 1, index + 1);
                int m2 = rec(arr, 2, index + 1);
                if (m1 < m2)
                    out[index][last_option] = m1;
                else
                    out[index][last_option] = m2;
                return out[index][last_option];
            }
        }
        else
        {
            out[index][last_option] = rec(arr, arr[index], index + 1);
            return out[index][last_option];
        }
    }

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
