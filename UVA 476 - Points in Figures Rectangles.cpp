// UVA 476 - Points in Figures Rectangles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector< vector<double> > vec;
    char inp;
    int n = 0;
    while (cin>>inp && inp != '*')
    {
        vector<double> row;
        double d;
        cin >> d;
        row.push_back(d);
        cin >> d;
        row.push_back(d);
        cin >> d;
        row.push_back(d);
        cin >> d;
        row.push_back(d);
        vec.push_back(row);
        n++;
    }

    double inp1, inp2;
    int count = 1;
    while (cin >> inp1 && cin >> inp2 && inp1 != 9999.9 && inp2 != 9999.9)
    {
        bool exi = false;
        for (int i = 0; i < n; i++)
        {
            if (inp1 > vec[i][0] && inp1 < vec[i][2] && inp2 <  vec[i][1] &&  inp2 > vec[i][3])
            {
                exi = true;
                cout << "Point " << count << " is contained in figure " << i + 1 << endl;
                
            }       
        }
        if (!exi)
        {
            cout << "Point " << count << " is not contained in any figure" << endl;
        }
        count++;
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
