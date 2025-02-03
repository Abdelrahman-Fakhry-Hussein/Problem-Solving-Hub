// Codeforces 186 D2 B Growing Mushrooms.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://codeforces.com/contest/186/problem/B

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
int main() 
{

    // link of problem http://codeforces.com/contest/186/problem/B

    long long n,t1,t2,k;
    cin>>n>>t1>>t2>>k;
    vector<pair<long long,double>> data;

    for(int i = 0;i<n;i++)
    {
        long long temp1,temp2;
        cin>>temp1>>temp2;
        data.push_back({i+1,max(temp1*( 1.0 - (k / 100.0))*t1+temp2*t2,temp2*( 1.0 - (k / 100.0))*t1+temp1*t2)});
    }

    sort(data.begin(), data.end(), [](const pair<long long, double>& p1, const pair<long long, double>& p2) 
    {
     if (p1.second != p2.second)
        return p1.second > p2.second;
    return p1.first < p2.first;
    });


    for(const auto& v: data)
    {
        cout<<v.first<<" "<<fixed<<setprecision(2)<<v.second<<endl;
    }

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
