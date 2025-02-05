// Codeforces 148 D2 B Escape.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://codeforces.com/contest/148/problem/B

#include <iostream>
using namespace std;
int main() 
{

    double vp,vd,t_discover ,f_straighten,castle_distance;
    cin>>vp>>vd>>t_discover>>f_straighten>>castle_distance;
    double distance=vp*t_discover,relative_speed=vd-vp,out=0;
    if(relative_speed<0)
      {
          cout<<0<<endl;
          return 0;
      }
    double ti = t_discover  + (distance/relative_speed);
     distance =ti*vp;
    while(distance <  castle_distance)
    {

        ti += (distance/vd) +f_straighten;
        distance =ti*vp;
        ti +=(distance/relative_speed);
        distance =ti*vp;
        out++;

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
