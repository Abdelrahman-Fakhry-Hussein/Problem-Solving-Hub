// Online Judge UVA 374 - Big Mod.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=310

#include <iostream>
using namespace std;
long long M = 0;
long long Big_Mod(long long B, long long P);

int main() 
{
    // link of the problem https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=310

    long long B = 0, P = 0;

    while (cin >> B >> P >> M)
        cout << Big_Mod(B, P) << endl;
    
    return 0;
}
long long Big_Mod(long long B, long long P)
{
    if (P == 0)
        return 1;

    long long temp = Big_Mod(B, P / 2);
    if (P % 2)
        return (temp * temp * B) % M;
    else
        return (temp * temp) % M;

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
