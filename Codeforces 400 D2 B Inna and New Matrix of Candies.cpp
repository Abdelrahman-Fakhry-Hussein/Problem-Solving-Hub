// Codeforces 400 D2 B Inna and New Matrix of Candies.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://codeforces.com/contest/400/problem/B

#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() 
{
    // link of problem http://codeforces.com/contest/400/problem/B

    set<int> sets;
    string s;
    int m,n,max=-1;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        cin>>s;
        int s1=0,s2=0;
        for(int j=0;j<n;j++)
        {
            if(s[j]=='G')
                s1=j;
            else if (s[j]=='S')
                s2=j;
        }
        if(s2 > s1 && s2-s1 > max)
        {
            sets.insert(s2-s1);
        }
        else if(s1 > s2)
        {
            cout<<-1<<endl;
            return 0;
        }
    }

     cout<<sets.size()<<endl;

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
