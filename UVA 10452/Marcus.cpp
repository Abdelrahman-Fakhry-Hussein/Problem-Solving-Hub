// ConsoleApplication45.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
#include <queue>

using namespace std;
void dfs(char** arr, int x, int y, int size_y);

int main()
{
    int size = 0;
    cin >> size;
    while (size-- != 0 )
    {
        int size_x = 0, size_y = 0;
        cin >> size_x >> size_y;
        char** arr = new char* [size_x];
        for (int ii = 0; ii < size_x; ii++)
        {

            arr[ii] = new char[size_y];

        }

        int x = 0, y = 0;
        for (int i = 0; i < size_x; i++)
        {
            for (int j = 0; j < size_y; j++)
            {
                char val;
                cin >> val;
                //scanf_s(" %c", &val, 1);
                //cout << val;
                arr[i][j] = val;
                if (val == '@')
                {
                    x = i;
                    y = j;
                }
                
            }
        }

    
        dfs(arr, x, y, size_y);
       std::cout << "\n";
    }
    
}

void dfs(char** arr, int x, int y, int size_y )
{
    
    stack<char> s;
    s.push(arr[x][y]);
    while (s.size() != 0)
    {
        char c = s.top();
        s.pop();

        if (c == '@')
        {
            if (y - 1 > -1)
            {
                if (arr[x][y - 1] == 'I')
                {
                    cout << "left ";
                 //   q.push("left");
                    dfs(arr, x, y - 1, size_y);
                }
            }
            if (y + 1 < size_y)
            {
                if (arr[x][y + 1] == 'I')
                {
                    cout << "right ";
                  //  q.push("right");
                    dfs(arr, x, y + 1, size_y);
                }
            }
            if (x - 1 > -1)
            {
                if (arr[x - 1][y] == 'I')
                {
                    cout << "forth ";
                    //q.push("forth");
                    dfs(arr, x - 1, y, size_y);
                }
            }
        }
        if (c == 'I')
        {
            if (y - 1 > -1)
            {
                if (arr[x][y - 1] == 'E')
                {
                    cout << "left ";
                    //q.push("left");
                    dfs(arr, x, y - 1, size_y);
                }
            }
            if (y + 1 < size_y)
            {
                if (arr[x][y + 1] == 'E')
                {
                    cout << "right ";

                   // q.push("right");
                    dfs(arr, x, y + 1, size_y);
                }
            }
            if (x - 1 > -1)
            {
                if (arr[x - 1][y] == 'E')
                {
                    cout << "forth ";
                    //q.push("forth");
                    dfs(arr, x - 1, y, size_y);
                }
            }

        }
        if (c == 'E')
        {
            if (y - 1 > -1)
            {
                if (arr[x][y - 1] == 'H')
                {
                    cout << "left ";
                    //q.push("left");
                    dfs(arr, x, y - 1, size_y);
                }
            }
            if (y + 1 < size_y)
            {
                if (arr[x][y + 1] == 'H')
                {
                    cout << "right ";

                    //q.push("right");
                    dfs(arr, x, y + 1, size_y);
                }
            }
            if (x - 1 > -1)
            {
                if (arr[x - 1][y] == 'H')
                {
                    cout << "forth ";
                    //q.push("forth");
                    dfs(arr, x - 1, y, size_y);
                }
            }

        }
        if (c == 'H')
        {
            if (y - 1 > -1)
            {
                if (arr[x][y - 1] == 'O')
                {
                    cout << "left ";
                    //q.push("left");
                    dfs(arr, x, y - 1, size_y);
                }
            }
            if (y + 1 < size_y)
            {
                if (arr[x][y + 1] == 'O')
                {
                    cout << "right ";

                    //q.push("right");
                    dfs(arr, x, y + 1, size_y);
                }
            }
            if (x - 1 > -1)
            {
                if (arr[x - 1][y] == 'O')
                {
                    cout << "forth ";
                    //q.push("forth");
                    dfs(arr, x - 1, y, size_y);
                }
            }
        }
        if (c == 'O')
        {
            if (y - 1 > -1)
            {
                if (arr[x][y - 1] == 'V')
                {
                    cout << "left ";
                    //q.push("left");
                    dfs(arr, x, y - 1, size_y);
                }
            }
            if (y + 1 < size_y)
            {
                if (arr[x][y + 1] == 'V')
                {
                    cout << "right ";

                    //q.push("right");
                    dfs(arr, x, y + 1, size_y);
                }
            }
            if (x - 1 > -1)
            {
                if (arr[x - 1][y] == 'V')
                {
                    cout << "forth ";
                    //q.push("forth");
                    dfs(arr, x - 1, y, size_y);
                }
            }
        }
        if (c == 'V')
        {
            if (y - 1 > -1)
            {
                if (arr[x][y - 1] == 'A')
                {

                    cout << "left ";
                    //q.push("left");
                    dfs(arr, x, y - 1, size_y);
                }
            }
            if (y + 1 < size_y)
            {
                if (arr[x][y + 1] == 'A')
                {
                    cout << "right ";

                    //q.push("right");
                    dfs(arr, x, y + 1, size_y);
                }
            }
            if (x - 1 > -1)
            {
                if (arr[x - 1][y] == 'A')
                {
                    cout << "forth ";
                    //q.push("forth");
                    dfs(arr, x - 1, y, size_y);
                }
            }
        }
        if (c == 'A')
        {
            if (y - 1 > -1)
            {
                if (arr[x][y - 1] == '#')
                {
                    cout << "left";
                    //q.push("left");
                }
            }
            if (y + 1 < size_y)
            {
                if (arr[x][y + 1] == '#')
                {
                    cout << "right";

                    //q.push("right");
                }
            }
            if (x - 1 > -1)
            {
                if (arr[x - 1][y] == '#')
                {
                    cout << "forth";
                    //q.push("forth");
                }
            }
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
