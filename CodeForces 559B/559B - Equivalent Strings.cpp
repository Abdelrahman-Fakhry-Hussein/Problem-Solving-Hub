// ConsoleApplication41.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

bool fun(string s1, string s2,int len)
{
    if (s1 == s2)
    {
        return true;
    }
    if (len % 2 == 1)
    {
        return false;
    }
    
   
    string a1 = s1.substr(0, len / 2);
    string a2 = s1.substr(len / 2, len / 2);

    string b1 = s2.substr(0, len / 2);
    string b2 = s2.substr(len / 2, len / 2);
    if (fun(a1, b2, len / 2))
    {
        return fun(a2, b1, len / 2);
    }
    else if (fun(a1, b1, len / 2))
    {
        return fun(a2, b2, len / 2);
    }
   
     return false;

    
}

int main() {

    string s1, s2;
    cin >> s1 >> s2;
   
    
    bool res = fun(s1, s2, s1.size());
    if (res)
    {
        cout << "YES" << endl;

    }
    else
    {
        cout << "NO" << endl;

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
