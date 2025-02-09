// Codeforces 545 D2 C Woodcutters.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://codeforces.com/contest/545/problem/C

#include <iostream>
#include<vector>
using namespace std;
long long  n;
long long  * arr_start;
long long  * arr_end;
vector<vector<long long>> arr;
long long  DP(long long  i, long long  prev_place,long long  prev_direction);
int  main() 
{

    // link of problem http://codeforces.com/contest/545/problem/C

    cin>>n;
    arr.assign(n, vector<long long>(3, -1));

    arr_start= new long long [n]();
    arr_end= new long long [n]();
    for(long long  i=0;i<n;i++)
    {
        cin>>arr_start[i]>>arr_end[i];
    }
        
    cout << DP(1,arr_start[0],0)+1<<endl;

    return 0;
}


long long  DP(long long  i, long long  prev_place,long long  prev_direction)
{
    if(i > n-1)
        return 0;
    else if(i==n-1)
    
        return 1;
    
    
    if(arr[i][prev_direction] != -1)
        return arr[i][prev_direction];
        
        
    long long  m1=0,m2=0,m3=0;
    if(arr_start[i]-arr_end[i] > prev_place)
        m1= 1 + DP(i+1,arr_start[i],0);
    else
        m1=  DP(i+1,arr_start[i],1);
        
        
        
    if (arr_start[i]+arr_end[i] < arr_start[i+1])
        m2= 1 + DP(i+1,arr_start[i]+arr_end[i],2);
    else
        m2=  DP(i+1,arr_start[i],1);
            
    m3= DP(i+1,arr_start[i],1);
    
    
   return arr[i][prev_direction] = max(m1, max(m2, m3));
  
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
