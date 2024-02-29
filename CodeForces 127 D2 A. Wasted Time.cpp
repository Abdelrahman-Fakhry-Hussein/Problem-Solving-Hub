// CodeForces 127 D2 A. Wasted Time.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem https://codeforces.com/contest/127/problem/A

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    // link of problem https://codeforces.com/contest/127/problem/A

    int n, k;
    cin >> n >> k;
    int x, y, prev_x, prev_y;
    double sum = 0.0;
    cin >> prev_x >> prev_y;
    for (int i = 1; i < n; i++)
    {
        cin >> x >> y;
        sum += sqrt((pow((x - prev_x), 2.0) + pow((y - prev_y), 2.0)));
        prev_x = x;
        prev_y = y;
    }
    sum /= 50;
    sum *= k;
    std::cout << std::fixed;
    std::cout << std::setprecision(9)<<sum<<endl;
   
   
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
