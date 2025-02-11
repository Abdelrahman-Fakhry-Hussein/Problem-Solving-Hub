// Codeforces 225 D2 C Barcode.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://codeforces.com/contest/225/problem/C

#include <iostream>
#include <cstring> 
using namespace std;
int n,m,x,y;
int * arrdot;

int memo[1000+9][1000+9][3];
// 0 mean . and 1 mean #
int fun(int i,int prev,int currentx);
int main() 
{
    // link of problem http://codeforces.com/contest/225/problem/C
    
    cin>>n>>m>>x>>y;
    arrdot = new int[m]();
   
    memset(memo, -1, sizeof(memo));
    char temp;
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            
            cin>>temp;

            if(temp=='.')
                arrdot[j]++;
        }
        
        
    }
   cout<<fun(0,2,0)<<endl;

    return 0;
}
int fun(int i,int prev,int currentx)
{
   
    if(i == m)
    {
        if(currentx < x )
		    return 100000000;
        return 0;
    }   

    if(memo[i][currentx][prev] != -1)
        return memo[i][currentx][prev];

    int dot=arrdot[i],hash=n-arrdot[i];
    int m1=1000000000,m2=1000000000;

    if(prev == 2 || (currentx < y && prev == 0) || (currentx >= x && prev == 1) )
    {
        if(prev == 1)
            m1 = dot + fun(i + 1, 0, 1);
         else
            m1 = dot + fun(i+1,0,currentx+1);
    }
    
    
    if(prev == 2 || (currentx < y && prev == 1) || (currentx >= x && prev == 0)  )
    {
        if(prev == 0)
            m2 = hash + fun(i + 1,1, 1);
         else
            m2 = hash + fun(i+1,1,currentx+1);
    }
   
    return memo[i][currentx][prev] = min(m1,m2);
   
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
