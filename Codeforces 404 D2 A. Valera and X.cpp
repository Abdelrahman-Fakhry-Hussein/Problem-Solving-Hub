// Codeforces 404 D2 A. Valera and X.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
   
    int n, temp = 1, temp2;
    cin >> n;
    temp2 = n;
    char inp, dia1, dia2, not_dia = '\0';
    bool X = true;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> inp;
            if (i == j)
            {
                dia1 = inp;
            }
            else if (i == temp && j == temp2)
            {
                dia2 = inp;
            }
            else
            {
                if (not_dia == '\0')
                {
                    not_dia = inp;
                }

                if (not_dia != inp)
                {
                    X = false;
                }
            }
        }
        if (dia2 != dia1)
        {
            X = false;
        }
        temp++;
        temp2--;
    }
    if (X && dia1 != not_dia)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


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
