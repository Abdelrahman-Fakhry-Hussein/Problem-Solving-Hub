// Minimum Edit Distance using memoization (top-down approach).cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>
#include <string>
using namespace std;
string s1,s2;
vector<vector<int>> memo;
int rec(int i,int j);
void constructPaths();
void printMemo();
int main() 
{
    cin>>s1>>s2;
    memo.assign(s1.size()+1,vector<int>(s2.size()+1,-1));
    cout <<rec(0,0)<<endl;
    printMemo();
    constructPaths();
    
    return 0;
}

int rec(int i,int j)
{
    if(i == s1.size() && j == s2.size())
        return 0;
    else if(i==s1.size())
        return s2.size() - j;
    else if(j==s2.size())
        return s1.size() - i;
    if(memo[i][j]!= -1)
        return memo[i][j];
    if (s1[i]== s2[j])
        return memo[i][j] = rec(i+1,j+1);
    int val1 = rec(i+1,j+1) + 1; // replace
    int val2 = rec(i+1,j)+1; // delete
    int val3 = rec(i,j+1)+1; // insert
    return memo[i][j] = min(val1,min(val2,val3));
}


void constructPaths()
{
    int i = 0, j = 0;

    while (i < s1.size() || j < s2.size())
    {
        if (i < s1.size() && j < s2.size() && s1[i] == s2[j])
        {
            cout << "Keep: " << s1[i] << endl;
            i++;
            j++;
        }
        else if (i < s1.size() && j < s2.size() && 
                 memo[i][j] == memo[i + 1][j + 1] + 1) 
        {
            cout << "Replace: " << s1[i] << " -> " << s2[j] << endl;
            i++;
            j++;
        }
        else if (i < s1.size() && 
                 (j == s2.size() || memo[i][j] == memo[i + 1][j] + 1))  
        {
            cout << "Delete: " << s1[i] << endl;
            i++;
        }
        else if (j < s2.size() && 
                 (i == s1.size() || memo[i][j] == memo[i][j + 1] + 1))  
        {
            cout << "Insert: " << s2[j] << endl;
            j++;
        }
    }
}
void printMemo()
{
    cout << "\nMemoization Table:\n";
    for (int i = 0; i <= s1.size(); i++)
    {
        for (int j = 0; j <= s2.size(); j++)
        {
            if (memo[i][j] == -1)
                cout << "- ";
            else
                cout << memo[i][j] << " ";
        }
        cout << endl;
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
