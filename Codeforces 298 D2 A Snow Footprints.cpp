// Codeforces 298 D2 A Snow Footprints.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem  http://codeforces.com/contest/298/problem/A

#include <iostream>
using namespace std;
int main() 
{
    // link of the problem  http://codeforces.com/contest/298/problem/A

    int n, s = -1, e = -1;
    cin >> n;
    char* arr = new char[n];
    cin >> arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        if (s == -1 && arr[i] != '.')
        {
            s = i + 1;
            if (arr[i] == 'L')
                e = i;
            else
                e = i + 1;

        }
        else if (arr[i] == 'R' && s != -1)
        {
            e = (i + 1);

        }
        else if (arr[i - 1] == 'R' && arr[i] == '.')
            e = (i + 1);
    }
    cout << s << " " << e << endl;

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
