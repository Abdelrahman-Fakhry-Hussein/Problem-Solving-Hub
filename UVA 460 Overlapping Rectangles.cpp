// UVA 460 Overlapping Rectangles.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=401

#include <iostream>
using namespace std;
int main() {
    // link of problem https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=401

    int i = 0;
    cin >> i;
    while (i--) {
        float xll1, yll1, xur1, yur1, xll2, yll2, xur2, yur2;

        cin >> xll1 >> yll1 >> xur1 >> yur1 >> xll2 >> yll2 >> xur2 >> yur2;
        if (xll1 > xll2)
            std::swap(xll1, xll2);
        if (yll1 > yll2)
            std::swap(yll1, yll2);
        if (xur1 > xur2)
            std::swap(xur1, xur2);
        if (yur1 > yur2)
            std::swap(yur1, yur2);
        if (xur1 > xll2 && yur1 > yll2)
        {
            cout << xll2 << " " << yll2 << " " << xur1 << " " << yur1 << endl;
        }
        else
        {
            cout << "No Overlap" << endl;
        }
        if (i) cout << endl;
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
