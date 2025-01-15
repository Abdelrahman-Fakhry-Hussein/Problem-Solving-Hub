// Codeforces 363 D2 B Fence.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem https://codeforces.com/contest/129/problem/B

#include <iostream>
#include <map>
#include<vector>
using namespace std;
int main() 
{
    // link of the problem https://codeforces.com/contest/129/problem/B

    int n, k;
    vector<std::pair<int, int>> m;
    cin >> n >> k;
    vector<int> vec(n, 0);
    for(int i=0;i<k;i++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
        vec[temp1-1]++;
        vec[temp2-1]++;
        m.push_back(make_pair(temp1-1,temp2-1));
    }

    int out = 0;
    bool flag= true;
    while(flag)
    {
        out++;
        vector<int> temps;
        for(int i=0;i<n;i++)
        {
            if(vec[i]==1)
            {
                vec[i]--;
                for(int j=0;j<k;j++)
                {
                    if(m[j].first == i)
                    {
                        temps.push_back(m[j].second);
                         
                    }
                    else if (m[j].second  ==i)
                    {
                        temps.push_back(m[j].first);
                    }
                }
            }
        }
        if(temps.size()==0)
        {
            flag = false;
        }
        else 
        {
            for(int i=0;i<temps.size();i++)
            {
                vec[temps[i]]--;
            }
        }
    }
    std::cout <<out-1<<endl;

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
