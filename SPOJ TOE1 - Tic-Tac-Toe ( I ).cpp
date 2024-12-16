// Online Judge SPOJ TOE1 - Tic-Tac-Toe ( I ).cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem http://www.spoj.com/problems/TOE1/

#include <iostream>
#include <queue>
using namespace std;
bool Is_Win(string config)
{
    bool rows = (config[0] != '.' && config[0] == config[1] && config[1] == config[2]) && (config[3] != '.' && config[3] == config[4] && config[4] == config[5]) && (config[6] != '.' && config[6] == config[7] && config[7] == config[8]);
   
    bool columns = (config[0] != '.' && config[0] == config[3] && config[3] == config[6]) && (config[1] != '.' && config[1] == config[4] && config[4] == config[7]) && (config[2] != '.' && config[2] == config[5] && config[5] == config[8]);
   
    bool diagonals = (config[0] != '.' && config[0] == config[4] && config[4] == config[8]) && (config[2] != '.' && config[2] == config[4] && config[4] == config[6]);
    return rows || columns || diagonals;
   
}
int main()
{
    int n = 0;
    cin>>n;
    while(n--)
    {
        string board = "", temp ="", out="no";
        cin >> temp;
        board += temp;
        cin >> temp;
        board += temp;
        cin >> temp;
        board += temp;
        temp = ".........";
        queue<pair<string, int>> q ;
        q.push({temp,1});
        while(q.size())
        {
            string cur = q.front().first;
            bool cur_player = q.front().second;
            q.pop();
            if(cur == board)
            {
                out = "yes";
                break;
            }
            if(Is_Win(cur))
                continue;
            for(int i = 0;i<9;i++)
            {
                if(cur[i] == '.')
                {
                    cur[i]=(cur_player ? 'X' : 'O');
                    if(cur[i] == board[i])
                       q.push({cur,1^cur_player});
                    cur[i]='.';
                }
            }
               
        }
        cout<<out<<endl;    
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
