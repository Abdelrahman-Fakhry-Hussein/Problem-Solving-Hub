// Codeforces 287 D2 B Pipeline.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem http://codeforces.com/contest/287/problem/B

#include <iostream>
using namespace std;

long long Sum(long long e);
long long Sum(long long s, long long e);
long long BS(long long k, long long n);

int main() 
{
    // link of the problem http://codeforces.com/contest/287/problem/B

    long long int n, k;
    cin >> n >> k;
    if (n == 1)
        cout << 0 << endl;
    else if (n <= k)
        cout << 1 << endl;
    else
    {
        k--;
        n--;
        if (Sum(k) < n)
            cout << -1 << endl;
        else
            cout << BS(k, n) << endl;
    }
    return 0;
}

long long Sum(long long e)
{
    return (e * (e + 1)) / 2;
}

long long Sum(long long s, long long e)
{
    if (s <= 1)
        return Sum(e);

    return Sum(e) - Sum(s - 1);
}

long long BS(long long k, long long n)
{
    long long start = 1, end = k;
    while (start < end)
    {
        long long int mid = (start + end) / 2;
        long long int s = Sum(mid, k);

        if (s == n)
            return k - mid + 1;
        else if (s > n)
            start = mid + 1;
        else
            end = mid;
    }
    return k - start + 2;
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
