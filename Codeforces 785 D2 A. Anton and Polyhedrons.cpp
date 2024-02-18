// Codeforces 785 D2 A. Anton and Polyhedrons.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include<string>
using namespace std;

int main() {

    int n;
    cin >> n;

    long long int out = 0;
    string inp;
    for (int i = 0; i < n; i++)
    {
        cin >> inp;
        if (inp == "Tetrahedron")
            out += 4;
        else if (inp == "Cube")
            out += 6;
        else if (inp == "Octahedron")
            out += 8;
        else if (inp == "Dodecahedron")
            out += 12;
        else if (inp == "Icosahedron")
            out += 20;
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
