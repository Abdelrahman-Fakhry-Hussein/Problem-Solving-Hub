// SPOJ AGGRCOW - Aggressive cows.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem http://www.spoj.com/problems/AGGRCOW/

#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool Check(int mid, int k);
void BS(int k, int n);
vector<int> arr;
int num = 0, n = 0, k = 0, ans, maxi = 0;

int main()
{
    // link of the problem http://www.spoj.com/problems/AGGRCOW/

    cin >> num;
    while (num--)
    {

        cin >> n >> k;
        arr.clear();
        arr.resize(n);
        for (int j = 0; j < n; j++)
            cin >> arr[j];

        sort(arr.begin(), arr.end());
        maxi = arr[n - 1];
        BS(k, maxi);
        cout << ans << endl;
    }
    return 0;
}



bool Check(int mid, int k)
{
    int cows = 1;
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - temp >= mid)
        {

            cows++;
            temp = arr[i];
        }
    }

    if (cows >= k)
        return true;

    return false;
}


void BS(int k, int n)
{

    int start = 0, end = n;
    ans = -1;
    while (start < end)
    {

        int mid = (start + end) / 2;
        bool s = Check(mid, k);

        if (s == true)
        {
            start = mid + 1;
            if (ans < mid)
                ans = mid;

        }
        else
            end = mid;
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
