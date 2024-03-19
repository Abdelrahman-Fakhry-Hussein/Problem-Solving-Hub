// UVA 10242 - Fourth Point !!.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1183

#include <iostream>
using namespace std;
int main()
{
    // link of problem https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1183

    double x1, x2, x3, x4, y1, y2, y3, y4;
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4)
    {

        if (x1 == x3 && y1 == y3)
        {
            printf("%.3f %.3f\n", x2 + x4 - x1, y2 + y4 - y1);
        }
        else if (x1 == x4 && y1 == y4)
        {
            printf("%.3f %.3f\n", x2 + x3 - x1, y2 + y3 - y1);
        }
        else if (x2 == x3 && y2 == y3)
        {
            printf("%.3f %.3f\n", x1 + x4 - x2, y1 + y4 - y2);
        }
        else
        {
            printf("%.3f %.3f\n", x3 + x1 - x2, y3 + y1 - y2);
        }

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
