// Online Judge UVA 10461 - Difference.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1402

#include <iostream>
#include <map>
#include <vector>
#include <queue>
using namespace std;
int bfs(vector<vector<int>>& graph,int start,vector<int>& cost);
int main()
{
    // link of the problem https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1402

    int v,e;
    int case_num=1;
    while (cin>>v>>e , (v+e))
    {
        cout<<"Case #"<<case_num++<<":"<<endl ;
        vector<int> times(v);
        int total_time=0;
        vector<vector<int>> data(v),data2(v);
        
        for(int i=0;i<v;i++)
        {
            cin>>times[i];
            total_time+=times[i];
        }
        for(int i=0;i<e;i++)
        { 
            int val=0,val2=0;
            cin>>val>>val2;
            val-=1;
            val2-=1;
            data[val].push_back(val2);
            data2[val2].push_back(val);
        }
        int k=0;
        cin>>k;
        for(int i=0;i<k;i++)
        {
            int q=0;
            cin>>q;
            q-=1;
        
            cout <<total_time-(bfs(data,q,times)+bfs(data2,q,times)+times[q])<<endl;
        }
        cout<<endl;
    }
    return 0;
}

int bfs(vector<vector<int>>& graph,int start,vector<int>& cost)
{
    
    int res=0;
    queue<int> q;
    q.push(start);
    vector<bool> visited(cost.size(),false);
    visited[start]=true;
    while(q.size())
    {
        int val = q.front();
        q.pop();
       
        for(int x:graph[val])
        {
            if(!visited[x])
            {
                res+=cost[x];
                visited[x]=true;
                q.push(x);
            }
            
        }
    }
    return res;
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
