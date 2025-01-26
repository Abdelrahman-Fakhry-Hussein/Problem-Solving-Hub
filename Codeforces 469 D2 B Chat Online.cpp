// Codeforces 469 D2 B Chat Online.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://codeforces.com/contest/469/problem/B

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // link of problem http://codeforces.com/contest/469/problem/B

    int p, q, l,r;
    cin>>p>>q>>l>>r;
    vector<bool> available(2010);
    for(int i=0;i<p;i++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
        for(int j=temp1;j<=temp2;j++)
            available[j]=true;          
    }
    vector<int> start,end;
 
    for(int i=0;i<q;i++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
        start.push_back(temp1);
        end.push_back(temp2);
    }
   
    int out_sec=0;
    for(int i=l;i<=r;i++)
    {
        bool flag = true;
        for(int j=0;j<q && flag;j++)
        {
            for(int k=start[j]+i;k<=end[j]+i;k++ )
            {
                if(available[k])
                {
                  flag = false;
                  break;
                }
            }
        }
        if(!flag)
            out_sec++;
    }  
       
       
    cout<< out_sec << endl;

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
