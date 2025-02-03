// Codeforces 152 D2 B Steps Binary Search.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://codeforces.com/contest/152/problem/B

#include <iostream>
using namespace std;
int main() 
{
    // link of problem http://codeforces.com/contest/152/problem/B

   long long n,m,xc,yc,k,out=0;
   
   cin>>n>>m>>xc>>yc>>k;
   
   for(long long i=0;i<k;i++)
   {
       long long temp1,temp2,start=0,end=1e9+9;
       cin>>temp1>>temp2;
       
       while(true)
       {
           
           long long mid = (start +end)/2;
           long long val1= xc+mid*temp1;
           long long val2= yc+mid*temp2;
           if(mid ==start)
           {
                out+=mid;
                xc = val1;
                yc=val2;
                break;
           }
           
           if(val1>n || val2>m || val1 <= 0 || val2 <= 0)
           {
               end= mid;
           }
           else
           {
               start=mid;
           }
         

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
