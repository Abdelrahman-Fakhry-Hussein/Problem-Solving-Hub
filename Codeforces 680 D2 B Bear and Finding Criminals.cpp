// Codeforces 680 D2 B Bear and Finding Criminals.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem http://codeforces.com/contest/680/problem/B

#include <iostream>
using namespace std;
int main()
{
    // link of the problem http://codeforces.com/contest/680/problem/B

    int n = 0, index = 0, out = 0, maxi = 0;
    cin >> n >> index;
    int* arr = new int[n]();

    for (int i = 0; i < n; i++)
        cin >> arr[i];


    if (n - index > index)
        maxi = n - index;
    else
        maxi = index;


    if (arr[index - 1])
        out++;

    int v1 = index - 2;
    int v2 = index;
    for (int i = 0; i < maxi; i++)
    {
        int val1 = 0, val2 = 0;
        if (v1 > -1 && v2 < n)
        {
            if (arr[v1] && arr[v2])
                out += 2;
        }
        else if (v1 > -1)
        {
            if (arr[v1])
                out += 1;
        }
        else if (v2 < n)
        {
            if (arr[v2])
                out += 1;
        }
        v1--;
        v2++;
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
