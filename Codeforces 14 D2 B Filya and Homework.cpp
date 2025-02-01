// Codeforces 14 D2 B Filya and Homework.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://codeforces.com/contest/714/problem/B

#include <iostream>
#include <set>
using namespace std;
int main() 
{
    // link of problem http://codeforces.com/contest/714/problem/B

    int n;
    set<int> s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        s.insert(temp);
    }
    if(s.size() < 3)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else if( s.size() == 3)
    {
        auto it  = s.begin();
        int temp1 = *it;
        ++it;
        int temp2 = *it;
        ++it;
        int temp3 = *it;
        
        if (temp2-temp1 == temp3 - temp2)
        {
            cout<<"YES"<<endl;
             return 0;
        }

    }
   
     cout<<"NO"<<endl;
    
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
