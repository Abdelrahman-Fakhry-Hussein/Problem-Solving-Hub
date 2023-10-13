// ConsoleApplication32.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Back Tracking

#include <iostream>
#include <iomanip>
#include <array>

using namespace std;
#define n 8
int inp[n][n];
bool check_row_diagonal[2* n-1];
bool check_col_diagonal[2 * n - 1];
bool row[n];
array<int, n> col;
array<int, n> col_res;
int sum = 0;
int resu = 0;

void backtrack(int num);
int main()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> inp[i][j];
        }
    }
    backtrack(0);
   
    std::cout << setw(5) << resu <<endl;
   // for (int i = 0; i < n; i++)
   //     cout << col_res[i] << " ";
    
    return 0;
}
void backtrack(int num)
{
    if (num == n)
    {
        if (resu < sum)
        {
            resu = sum;
            col_res = col;
        }
       
        return;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (!check_row_diagonal[num - i + 7] && !check_col_diagonal[num + i] && !row[i])
        {
            row[i] = true;
            check_row_diagonal[num - i + 7] = true;
            check_col_diagonal[num + i] = true;
            sum += inp[num][i];
            col[num] = inp[num][i];
            backtrack(num + 1);
            row[i] = false;
            check_row_diagonal[num - i + 7] = false;
            check_col_diagonal[num + i] = false;
            sum -= inp[num][i];
        }
       

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
