// Codeforces 225 D2 A Dice Tower.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://codeforces.com/contest/225/problem/A

#include <iostream>
#include <vector>
using namespace std;
int main() {
    // link of problem http://codeforces.com/contest/225/problem/A

    int n, top;
    cin >> n >> top;
    vector<vector<int>> data(n, vector<int>(6));
    vector<vector<int>> out(n, vector<int>(6));
    data[n - 1][0] = top;
    for (int i = n - 1; i >= 0; i--)
    {
        int val;
        cin >> val;
        data[i][1] = val;
        cin >> val;
        data[i][2] = val;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        data[i][0] = top;
        //cout<<"@"<<top<<endl;
        if (data[i][0] == 6)
        {

            if (data[i][1] == top || data[i][2] == top)
            {
                cout << "NO" << endl;
                return 0;
            }
            int u = 1;
            top = 1;
            if (data[i][1] == top || data[i][2] == top)
            {
                cout << "NO" << endl;
                return 0;
            }
            for (int j = 1; j <= 6; j++)
            {

                if (data[i][1] != j && data[i][2] != j && data[i][0] != j && j != top)
                {

                    out[i][u++] = j;
                }
            }

        }
        else if (data[i][0] == 1)
        {

            if (data[i][1] == top || data[i][2] == top)
            {
                cout << "NO" << endl;
                return 0;
            }
            int u = 1;
            top = 6;
            if (data[i][1] == top || data[i][2] == top)
            {
                cout << "NO" << endl;
                return 0;
            }
            for (int j = 1; j <= 6; j++)
            {
                if (data[i][1] != j && data[i][2] != j && data[i][0] != j && j != top)
                {
                    out[i][u++] = j;
                }
            }

        }
        else
        {
            if ((data[i][0] == 2 && (data[i][1] == 3 || data[i][2] == 3)) ||
                (data[i][0] == 2 && (data[i][1] == 4 || data[i][2] == 4)))
            {
                if (data[i][1] == top || data[i][2] == top)
                {
                    cout << "NO" << endl;
                    return 0;
                }
                int u = 1;
                top = 5;
                if (data[i][1] == top || data[i][2] == top)
                {
                    cout << "NO" << endl;
                    return 0;
                }
                for (int j = 1; j <= 6; j++)
                {
                    if (data[i][1] != j && data[i][2] != j && data[i][0] != j && j != top)
                    {
                        out[i][u++] = j;
                    }
                }


            }

            else if ((data[i][0] == 3 && (data[i][1] == 2 || data[i][2] == 2)) ||
                (data[i][0] == 3 && (data[i][1] == 5 || data[i][2] == 5)))
            {
                if (data[i][1] == top || data[i][2] == top)
                {
                    cout << "NO" << endl;
                    return 0;
                }
                top = 4;
                int u = 1;
                if (data[i][1] == top || data[i][2] == top)
                {
                    cout << "NO" << endl;
                    return 0;
                }
                for (int j = 1; j <= 6; j++)
                {
                    if (data[i][1] != j && data[i][2] != j && data[i][0] != j && j != top)
                    {
                        out[i][u++] = j;
                    }
                }
            }
            else if ((data[i][0] == 4 && (data[i][1] == 2 || data[i][2] == 2)) ||
                (data[i][0] == 4 && (data[i][1] == 5 || data[i][2] == 5)))
            {
                if (data[i][1] == top || data[i][2] == top)
                {
                    cout << "NO" << endl;
                    return 0;
                }
                top = 3;
                int u = 1;
                if (data[i][1] == top || data[i][2] == top)
                {
                    cout << "NO" << endl;
                    return 0;
                }
                for (int j = 1; j <= 6; j++)
                {
                    if (data[i][1] != j && data[i][2] != j && data[i][0] != j && j != top)
                    {
                        out[i][u++] = j;
                    }
                }
            }
            else if ((data[i][0] == 5 && (data[i][1] == 3 || data[i][2] == 3)) || (data[i][0] == 5 && (data[i][1] == 4 || data[i][2] == 4)))
            {
                if (data[i][1] == top || data[i][2] == top)
                {
                    cout << "NO" << endl;
                    return 0;
                }
                top = 2;
                int u = 1;
                if (data[i][1] == top || data[i][2] == top)
                {
                    cout << "NO" << endl;
                    return 0;
                }
                for (int j = 1; j <= 6; j++)
                {
                    if (data[i][1] != j && data[i][2] != j && data[i][0] != j && j != top)
                    {
                        out[i][u++] = j;
                    }
                }
            }


        }
    }
    bool Could = true;
    for (int i = n - 1; i >= 0; i--) {

        for (int j = 0; j < 6; ++j) {
            if (out[i][1] == data[i][j] || out[i][2] == data[i][j])
            {
                Could = false;
            }
            //  std::cout << out[i][j] << " ";
        }
        //   std::cout << std::endl;
    }
    if (Could)
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
