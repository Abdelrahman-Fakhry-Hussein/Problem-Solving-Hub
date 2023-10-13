// ConsoleApplication34.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n, m, num_balls;
    cin >> n >> m >> num_balls;
    int** inp = new int * [n];
    for (int i = 0; i < n; i++)
        inp[i] = new int[m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> inp[i][j];
        }
    }
    
    for (int i = 0; i < num_balls; i++)
    {
        int row = 0; int col=0;
        cin >>col;
        --col;
        while (row != n)
        {
           
            if(inp[row][col] == 1)
            {
                inp[row][col] = 2;
                col += 1;
            }
            else if (inp[row][col] == 2)
            {

                row += 1;
            }
            else 
            {
                inp[row][col] = 2;
                col-=1;
            }
     
        }
        
        std::cout << col + 1 << " " ;

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
