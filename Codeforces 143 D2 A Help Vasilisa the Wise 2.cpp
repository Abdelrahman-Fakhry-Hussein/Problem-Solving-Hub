// Codeforces 143 D2 A Help Vasilisa the Wise 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://codeforces.com/contest/143/problem/A

#include <iostream>
#include <set>
using namespace std;
bool isDistinctAndInRange(int x1, int x2, int x3, int x4) {
    set<int> values = { x1, x2, x3, x4 };
    if (values.size() == 4) {
        for (int x : values) {
            if (x < 1 || x > 9) {
                return false;
            }
        }
        return true;
    }
    return false;
}

int main() 
{
    // link of problem http://codeforces.com/contest/143/problem/A

    int r1, r2, c1, c2, d1, d2;

    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    int x1 = (d1 + r1 - c2) / 2;

    int x3 = c1 - x1;
    int x2 = d2 - x3;
    int x4 = r2 - x3;


    if (isDistinctAndInRange(x1, x2, x3, x4) && x1 + x4 == d1 && x1 + x2 == r1 && x2 + x4 == c2) {
        cout << x1 << " " << x2 << endl;
        cout << x3 << " " << x4 << endl;
    }
    else {
        cout << -1 << endl;
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
