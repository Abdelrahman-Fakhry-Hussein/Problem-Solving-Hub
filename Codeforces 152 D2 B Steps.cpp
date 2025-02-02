// Codeforces 152 D2 B Steps.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://codeforces.com/contest/152/problem/B

#include <iostream>
using namespace std;
typedef long long ll;
int main() 
{
    // link of problem http://codeforces.com/contest/152/problem/B
    
    ll x,y,initialx,initialy,n,out=0;
    cin>>x>>y>>initialx>>initialy>>n;
    for(ll i =0;i<n;i++)
    {
        ll dx,dy,stepsx,stepsy,steps=0;
        cin>>dx>>dy;
        if(dx > 0)
            stepsx = (x-initialx)/dx;
        else if (dx < 0)
            stepsx=(initialx-1)/-dx;
        else
            stepsx = 0;

        
        if(dy > 0)
            stepsy = (y-initialy)/dy;
        else if  (dy < 0)
            stepsy=(initialy-1)/-dy;
        else
            stepsy = 0;
        
        
        
        if(stepsx < stepsy)
            steps=stepsx;
        else
            steps=stepsy;


        if(dx == 0 && dy!=0)
            steps=stepsy;
        else if(dy == 0 && dx!=0)
            steps=stepsx;
            
        initialx += (steps*dx);
        initialy += (steps*dy);
        out +=steps ;

    
    }
    cout << out<<endl;

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
