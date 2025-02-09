// Codeforces 545 D2 C Woodcutters.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://codeforces.com/contest/545/problem/C

#include <iostream>
using namespace std;
long long n;
long long * arr_start;
long long * arr_end;
int main() 
{
    // link of problem http://codeforces.com/contest/545/problem/C

    cin>>n;
    arr_start= new long long[n+1]();
    arr_end= new long long[n]();
    for(int i=0;i<n;i++)
        cin>>arr_start[i]>>arr_end[i];
    
    arr_start[n] = -1;
    long long prev_loc = arr_start[0],out = 1;
    for(int i=1;i<n;i++)
    {
        if( arr_start[i]-arr_end[i] > prev_loc)
        {
            out+=1;
            prev_loc = arr_start[i];
        }
        else if(arr_start[i]+arr_end[i] < arr_start[i+1] || arr_start[i+1] == -1)
        {
            out+=1;
            prev_loc = arr_start[i]+arr_end[i];
        }
        else
        {
            prev_loc = arr_start[i];
        }
        
    }
    cout<<out<<endl;
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
