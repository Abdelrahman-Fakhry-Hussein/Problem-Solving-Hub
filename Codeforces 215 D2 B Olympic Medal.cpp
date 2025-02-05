// Codeforces 215 D2 B Olympic Medal.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem https://codeforces.com/problemset/problem/215/B

#include <iostream>
#include <math.h>
#include <iomanip>  
using namespace std;
int main()
{
    // link of problem https://codeforces.com/problemset/problem/215/B

    double r_out_b = 0;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp > r_out_b)
            r_out_b=temp;
    }
    
    
    double p_out_b = 0;
    int m;
    cin>>m;
    for(int i = 0;i<m;i++)
    {
        int temp;
        cin>>temp;
        if(temp > p_out_b)
            p_out_b=temp;
    }
    
    double p_in_s = 10000000;
    int k;
    cin>>k;
    for(int i = 0;i<k;i++)
    {
        int temp;
        cin>>temp;
        if(temp < p_in_s)
            p_in_s=temp;
    }
    
    double A,B;
    cin>>A>>B;
    
    cout<< fixed<< setprecision(6)<<sqrt((B*p_out_b*r_out_b*r_out_b)/(A*p_in_s+B*p_out_b))<<endl;
    
    
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
