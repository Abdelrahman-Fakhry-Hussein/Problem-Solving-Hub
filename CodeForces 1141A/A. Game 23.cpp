// Game 23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
long long fun(long long start, long long end, long long count)
{
    if (start > end)
    {
        return -1;
    }
    
    if (start == end)
    {
        return count;
    }
    long long s1 = start * 2;
    long long c = count;
    long long l1 = fun(s1, end, ++c);
    long long s2 = start * 3;
    //cout << s2 << " " << end << " " << count << endl;

    long long l2 = fun(s2, end, ++count);
    if (l1 == -1)
    {
        return l2;
    }
    else if(l2 == -1)
    {
        return l1;
    }
    if (l1 < l2)
    {
        return l1;
    }
    else if (l2 < l1)
    {
        return l2;
    }
}
int main()
{

    long long start, end, count = 0;
    cin >> start >> end;
    
    std::cout << fun(start, end, count) << endl;
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
