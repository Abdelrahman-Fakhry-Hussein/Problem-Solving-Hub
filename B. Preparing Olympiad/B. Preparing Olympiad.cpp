// B. Preparing Olympiad.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int minn, maxx, min_dif, n, out = 0;
void fun(int val, vector<int> vs);
vector<int> utils(vector<int>& vsaa);
int main()
{
    int maxa = 0;

    cin >> n >> minn >> maxx >> min_dif;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {

        cin >> v[i];
        if (maxa < v[i])
        {
            maxa = v[i];
        }
    }
    vector<int> vs1a;
    fun(0, vs1a);
    cout << out << endl;
    return 0;
}

vector<int> utils(vector<int>& vsaa)
{
    int M = vsaa[0], S = 0, Maxi = 0;
    for (int i = 0; i < vsaa.size(); i++)
    {
        S += vsaa[i];
        if (vsaa[i] > Maxi)
        {
            Maxi = vsaa[i];
        }
        if (M > vsaa[i])
        {
            M = vsaa[i];
        }
    }
    return vector<int>{S, M, Maxi};
}
void fun(int val, vector<int> vs)
{
    if (vs.size() > 0 && val == n)
    {
        vector<int> temp = utils(vs);
        if (temp[0] >= minn && temp[0] <= maxx && (temp[2] - (temp[1])) >= min_dif)
        {

            out++;
        }
    }
    if (val != n)
    {

        vector<int> vs1 = vs;
        vs1.push_back(v[val]);

        fun(val + 1, vs1);
        vector<int> vs2 = vs;

        fun(val + 1, vs2);
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
