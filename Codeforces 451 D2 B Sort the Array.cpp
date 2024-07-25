// Codeforces 451 D2 B Sort the Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem http://codeforces.com/contest/451/problem/B

#include <iostream>
using namespace std;
int main()
{
    // link of the problem http://codeforces.com/contest/451/problem/B

    long long int n = 0, max = -1, start = -1, end = -1, Val = 0, start2 = 0, max1 = -1, min3 = 100000000000, min2 = 100000000000, max2 = -1;
    cin >> n;
    long long int* arr = new long long int[n];
    cin >> arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < arr[i - 1])
        {
            Val++;
            if (start == -1)
                start = i - 1;
            if (arr[i] < min2)
                min2 = arr[i];

            if (arr[i - 1] > max2)
                max2 = arr[i - 1];
        }
        else
        {
            if (end == -1 && start != -1)
                end = i - 1;

            if (start == -1)
            {
                if (arr[i - 1] > max1)
                    max1 = arr[i - 1];
            }
            else
            {

                if (arr[i] < min3)
                    min3 = arr[i];
            }


        }
    }
    if (start == -1 && end == -1)
    {
        cout << "yes" << endl << 1 << " " << 1 << endl;
    }
    else if (start == -1 && end != -1 && max1 < min2 && max2 < min3)
    {
        cout << "yes" << endl << 1 << " " << end + 1 << endl;
    }
    else if (end == -1 && start != -1 && max1 < min2 && max2 < min3)
    {
        cout << "yes" << endl << start + 1 << " " << n << endl;
    }
    else if (end - start == Val && max1 < min2 && max2 < min3)
    {
        cout << "yes" << endl << start + 1 << " " << end + 1 << endl;
    }
    else
    {
        cout << "no" << endl;
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
