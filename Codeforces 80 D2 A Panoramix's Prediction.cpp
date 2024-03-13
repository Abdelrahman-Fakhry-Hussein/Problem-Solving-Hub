// Codeforces 80 D2 A Panoramix's Prediction.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://codeforces.com/contest/80/problem/A

#include <iostream>
using namespace std;
int n = 100;
bool arr[100 + 1];
void solve()
{

    for (int i = 4; i <= n; i += 2)
        arr[i] = true;
    for (int i = 3; i <= n; i += 2)
    {
        for (int j = i + i; j <= n; j += i)
        {
            arr[j] = true;
        }
    }
}
int main() {
    // link of problem http://codeforces.com/contest/80/problem/A

    bool exist = false;
    //cin >>n;
    solve();
    int l, r;
    cin >> l >> r;
    for (int i = l + 1; i < r; i++)
    {
        if (!arr[i])
            exist = true;
    }
    if (exist || arr[r] || arr[l])
        cout << "NO" << endl;
    else
        cout << "YES" << endl;


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
