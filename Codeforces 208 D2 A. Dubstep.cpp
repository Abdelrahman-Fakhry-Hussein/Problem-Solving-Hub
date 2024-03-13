// CF 208 D2 A. Dubstep.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std; 

int main() {
    
    string input, out = "";

    getline(cin, input);
    input = "WUB" + input + "WUB";


    int size = input.size() - 2;
    for (int i = 0; i < size; i++) {
        if (input[i] == 'W' && input[i + 1] == 'U' && input[i + 2] == 'B')
        {
            i += 2;
            if (i != 0)
                out += " ";
            continue;
        }
        out += input[i];
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
