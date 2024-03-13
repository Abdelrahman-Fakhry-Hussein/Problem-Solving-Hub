// Codeforces 742 D2 A Arpa’s hard exam and Mehrdad’s naive cheat.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://codeforces.com/contest/742/problem/A


#include <iostream>
#include<math.h>
using namespace std;
int solve(int power, int mod);
int main() {

    // link of problem http://codeforces.com/contest/742/problem/A
    int pows;
    cin >> pows;

    std::string my_vaal = std::to_string(solve(pows, 10));
    std::cout << my_vaal[my_vaal.size() - 1];
    return 0;
}
int solve(int power, int mod)
{
    if (power == 0)
        return 1;
    else if (power % 2 == 0)
    {
        int v = (solve(power / 2, mod) % mod);
        return (v * v) % mod;

    }
    else
    {

        int v = (solve(power - 1, mod) % mod);
        return (v * 8) % mod;

    }

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
