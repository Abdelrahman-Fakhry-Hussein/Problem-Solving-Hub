// UVA Online Judge 10611 - The Playboy Chimp.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1552

#include <iostream>
using namespace std;
int s = -1, e = -1;
void BS(int* arr, int start, int end, int val, int size);
int main() 
{
    // link of the problem https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1552

    int n, m, val;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> val;

        BS(arr, 0, n - 1, val, n);
        if (s == -1)
        {
            cout << "X " << e << endl;
        }
        else if (e == -1)
        {
            cout << s << " X" << endl;
        }
        else
        {
            cout << s << " " << e << endl;
        }
        s = -1;
        e = -1;
    }

    return 0;
}
void BS(int* arr, int start, int end, int val, int size)
{
    int mid = (start + end) / 2;
    if (val > arr[mid] || val < arr[mid])
    {
        if (mid + 1 < size && val < arr[mid + 1] && val > arr[mid])
        {
            s = arr[mid];
            e = arr[mid + 1];
            return;
        }
        else if (mid - 1 > -1 && val > arr[mid - 1] && arr[mid] > val)
        {
            s = arr[mid - 1];
            e = arr[mid];
            return;
        }
        else if (mid + 1 >= size && arr[mid] < val)
        {
            s = arr[mid];
            e = -1;
            return;
        }
        else if (mid - 1 <= -1 && arr[mid] > val)
        {
            s = -1;
            e = arr[mid];
            return;
        }
        else if (arr[mid] > val && arr[mid + 1] > val)
        {
            end = mid;
            BS(arr, start, end, val, size);
        }
        else if (arr[mid] < val && arr[mid + 1] < val)
        {

            start = mid + 1;
            BS(arr, start, end, val, size);
        }
    }
    else if (arr[mid] == val)
    {
        for (int i = mid - 1; i >= 0; i--)
        {
            if (arr[i] < val)
            {
                s = arr[i];
                break;
            }

        }

        for (int i = mid + 1; i < size; i++)
        {
            if (arr[i] > val)
            {
                e = arr[i];
                return;
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
