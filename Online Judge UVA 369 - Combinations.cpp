// Online Judge UVA 369 - Combinations.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=305

#include <iostream>
using namespace std;
long long M = 0;
int main() 
{
    // link of the problem https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=305

    int n = 0, m = 0, min = 0;
    int N[101];
    int M[101];
    int N_M[101];

    while (1)
    {
        cin >> n >> m;

        if (n == 0 && m == 0)
            break;

        N[0] = 1;
        M[0] = 1;
        N_M[0] = 1;
        cout << n << " things taken " << m << " at a time is ";
        if (n - m < m)
        {
            min = n - m;
            for (int i = 1; i <= min; i++)
            {
                N_M[i] = 1;
                N[i] = 1;
                M[i] = i;
            }
            int temp = m;
            for (int i = min + 1; i <= n; i++)
            {
                if (i <= temp)
                {
                    M[i] = 1;
                    N[i] = 1;
                }
                else
                {
                    N[i] = i;
                    for (int ii = 1; ii <= min; ii++)
                    {
                        if (i % M[ii] == 0 && M[ii] != 1)
                        {
                            N[i] = i / M[ii];
                            M[ii] = 1;
                            break;
                        }
                    }
                }
            }

            long long int num = 1;
            for (int i = min + 1; i <= n; i++)
            {
                num *= N[i];
            }
            long long int denom = 1;
            for (int i = 1; i <= min; i++)
            {
                denom *= M[i];
            }
            cout << num / denom << " exactly." << endl;

        }
        else
        {
            min = m;
            for (int i = 1; i <= min; i++)
            {
                M[i] = 1;
                N[i] = 1;
                N_M[i] = i;
            }
            int temp = n - m;
            for (int i = min + 1; i <= n; i++)
            {
                if (i <= temp)
                {
                    N_M[i] = 1;
                    N[i] = 1;
                }
                else
                {
                    N[i] = i;
                    for (int ii = 1; ii <= min; ii++)
                    {
                        if (i % N_M[ii] == 0 && N_M[ii] != 1)
                        {
                            N[i] = i / N_M[ii];
                            N_M[ii] = 1;
                            break;
                        }
                    }
                }
            }


            long long int num = 1;
            for (int i = min + 1; i <= n; i++)
            {
                num *= N[i];
            }
            long long int denom = 1;
            for (int i = 1; i <= min; i++)
            {
                denom *= N_M[i];
            }
            cout << num / denom << " exactly." << endl;
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
