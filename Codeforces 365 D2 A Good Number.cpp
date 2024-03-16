// Codeforces 365 D2 A Good Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://codeforces.com/contest/365/problem/A

#include <iostream>
#include <vector>
using namespace std;
int main() {
    // link of problem http://codeforces.com/contest/365/problem/A

    int n = 0, k = 0, out = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        vector<bool> m(k + 1);
        int val;
        cin >> val;
        while (val != 0)
        {
            m[val % 10] = true;
            val /= 10;
        }
        int sum = 0;
        for (int i = 0; i <= k; ++i) {
            sum += m[i];
        }
        if (sum == k + 1)
            out++;
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
