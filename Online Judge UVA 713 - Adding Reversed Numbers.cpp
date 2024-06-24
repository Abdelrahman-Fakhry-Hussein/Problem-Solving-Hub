// Online Judge UVA 713 - Adding Reversed Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=654

#include <iostream>
#include <string>
using namespace std;
int main() 
{
    // link of the problem https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=654

    int n = 0;
    cin >> n;
    while (n--)
    {
        string s1, s2, outs = "", val = "";
        int  min = 0, car = 0, max = 0, n = 0;
        cin >> s1 >> s2;
        if (s1.size() < s2.size())
        {
            min = s1.size();
            max = s2.size();
            val = s2;
        }
        else
        {
            min = s2.size();
            max = s1.size();
            val = s1;
        }

        for (int i = 0; i < min; i++)
        {

            int sum = (s1[i] - '0') + (s2[i] - '0') + car;

            car = sum / 10;
            sum %= 10;
            outs += to_string(sum);

        }

        for (int i = min; i < max; i++)
        {
            int sum = (val[i] - '0') + car;
            car = sum / 10;
            sum %= 10;
            outs += to_string(sum);
        }

        if (car)
            outs += to_string(car);

        int ii = 0;
        for (; ii < outs.size(); ii++)
            if (outs[ii] != '0')
                break;

        for (; ii < outs.size(); ii++)
            cout << outs[ii];

        cout << endl;
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
