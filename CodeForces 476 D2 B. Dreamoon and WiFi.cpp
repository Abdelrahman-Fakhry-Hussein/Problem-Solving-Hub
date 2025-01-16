// CodeForces 476 D2 B. Dreamoon and WiFi.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of problem http://codeforces.com/contest/476/problem/B

#include <iostream>
#include <map>
#include <string>
#include <iomanip>  
#include <cmath>
using namespace std;
map<int, int> m;
int num_q=0;
void fun(string s,int i,int out,int len);
int main()
{
    // link of problem http://codeforces.com/contest/476/problem/B

    string input,out;
    for (int i = 0; i <= 10; ++i) 
    {
        m[i] = 0;
    }
    cin >> input >>out; 
    int val=0;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '+') 
            val++;  // Increment val for '+'
        else if (input[i] == '-')
            val--;  // Decrement val for '-'
        
        if(out[i]=='?')
        num_q++;
    }
    fun(out,0,0,out.size());
    
    if(num_q == 0)
    {
        if(m[val]==1)
            std::cout << std::fixed << std::setprecision(12) << 1.0 << std::endl;
        else
            std::cout << std::fixed << std::setprecision(12) << 0.0 << std::endl;
    }
    else
        std::cout << std::fixed << std::setprecision(12) << m[val]/ pow(2, num_q) << std::endl;

 

    return 0;
}


void fun(string s,int i,int out,int len)
{
    if(i==len)
    {
        m[out]+=1;
        return;
    }
    if(s[i]=='+') 
        fun(s,i+1,out+1,len);
    else if(s[i]=='-')
        fun(s,i+1,out-1,len);
    else 
    {
        fun(s,i+1,out+1,len);
        fun(s,i+1,out-1,len);
    }
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
