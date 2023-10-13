// ConsoleApplication33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Dynamic Programming

#include <iostream>
using namespace std;
int sizee ;
int num ;
int* inp;
int** dataa;
int DP(int size, int values);
int main()
{
    int l = 0;
    cin >> l;
    for(int ia=0;ia<l;ia++)
    {
    cin >> sizee >> num;

    inp = new int[num];
    for (int i = 0; i < num; i++)
        cin >> inp[i];

    dataa=new int*[num + 1];



    for (int i = 0; i <= num; i++) {

        dataa[i] = new int[sizee+1];
    }
    for (int i = 0; i <= num; i++) {
        for (int j = 0; j <= sizee; j++) {
            dataa[i][ j] = -1;
        }
    }
    
    
    std::cout << ((DP(sizee,num)==sizee)? "YES" : "NO" )<< endl;
    }
    return 0;
}
int DP(int size, int num)
{

    if (dataa[num][size] != -1)
        return dataa[num][size];
    else
    {
    if (size == 0 || num == 0)
    {
        dataa[num][size] = 0;
        return 0;
    }
    if (inp[num - 1] > size)
    {
        dataa[num][size] = DP(size, num - 1);
        return dataa[num][size];
    }
    else
    {
        dataa[num][size]
            = max((inp[num - 1]
                + DP(size-inp[num - 1], num - 1)),
                DP(size, num - 1));
        return   dataa[num][size];
    }

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
