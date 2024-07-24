// Codeforces 363 D2 B Fence.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem http://codeforces.com/contest/363/problem/B

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // link of the problem http://codeforces.com/contest/363/problem/B

    long long int length = 0, temp = 0, t = 0, min = -1, min_index = 0;
    cin >> length >> temp;
    vector<long long int> v(length + 1), v_A(length + 1);
    v[0] = 0;
    v_A[0] = 0;
    for (long long int i = 1; i <= length; i++)
    {
        cin >> t;
        v[i] = t;
        v_A[i] = t;
        if (i >= temp)
        {
            v_A[i] += (v_A[i - 1] - v[i - temp]);
            if (min == -1)
            {
                min = v_A[i];
                min_index = i - temp + 1;
            }
            if (min > v_A[i])
            {
                min = v_A[i];
                min_index = i - temp + 1;
            }
        }
        else
        {
            v_A[i] += v_A[i - 1];
        }
    }

    cout << min_index << endl;

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
