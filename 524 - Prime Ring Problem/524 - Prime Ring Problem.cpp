// 524 - Prime Ring Problem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;
set<vector<int>> output;

map<int, bool> valid = { {2,true }, {3,true },{5,true }, {7,true },{11,true }, {13,true },{17,true }, {19,true },{23,true }, {29,true },{31,true }, {37,true }, {41,true } };
void Checking(int val1, int val2, vector<int>& v, vector<bool>& Taken)
{
    if (v.size() == val2)
    {
        if (valid[v[0] + v[val2 - 1]] == true)
        {
            vector<int> v1a = v;
            output.insert(v1a);
        }
    }

    for (int i = 2; i <= val2; i++)
    {
        if (valid[i + val1] && Taken[i])
        {
            // cout << i + val1 << endl;
            vector<int> v1 = v;
            v1.push_back(i);
            vector<bool> va1 = Taken;
            va1[i] = false;

            Checking(i, val2, v1, va1);
        }
    }

}

int main()
{
    int n, c = 0;
    int num = 1;
    while (cin >> n)
    {
        if (c++)
            cout << endl;
        vector<bool> Taken(n + 1);
        vector<int> arr;
        for (int i = 1; i <= n; i++)
        {

            Taken[i] = true;
        }
        Taken[1] = false;
        arr.push_back(1);
        Checking(1, n, arr, Taken);
        cout << "Case " << num++ << ":\n";

        for (auto vec : output) {

            int o = 0;
            for (int i : vec)
            {
                o++;
                cout << i;
                if (o != n)
                {
                    cout << " ";
                }
            }
            cout << endl;


        }
        output.clear();
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
