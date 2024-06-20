// SPOJ EASYMATH - EASY MATH.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem https://www.spoj.com/problems/EASYMATH/

#include <iostream>
using namespace std;

long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main() 
{

    // link of the problem https://www.spoj.com/problems/EASYMATH/

    int T = 0;
    cin >> T;
    while (T--)
    {
        long long n, m, a, b, range;
        long long arr[5];

        cin >> n >> m >> a >> b;
        arr[0] = a;
        arr[1] = a + b;
        arr[2] = a + 2 * b;
        arr[3] = a + 3 * b;
        arr[4] = a + 4 * b;
        range = m - n + 1;
        long long even = 0, odd = 0;
        for (int i = 0; i < (1 << 5); i++)
        {
            long long Lcm = 1, num_ones = 0;

            for (int j = 0; j < 5; j++)
            {
                if ((i >> j) & 1)
                {
                    num_ones++;
                    Lcm = lcm(Lcm, arr[j]);
                }
            }
            long long temp = (m / Lcm - ((n - 1) / Lcm));
            if (num_ones % 2)
                odd += temp;
            else
                even += temp;
        }
        cout << even - odd << endl;
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
