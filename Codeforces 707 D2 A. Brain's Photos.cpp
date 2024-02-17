// Codeforces 707 D2 A. Brain's Photos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>

using namespace std; // Add this line to use the std namespace

int main() {
    // Declare a string variable to store the input
    int n, m;
    cin >> n >> m;
    n *= m;
    bool colored = false;
    char input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input == 'C' || input == 'M' || input == 'Y')
            colored = true;
    }
    if (colored)
        cout << "#Color" << endl;
    else
        cout << "#Black&White" << endl;

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
