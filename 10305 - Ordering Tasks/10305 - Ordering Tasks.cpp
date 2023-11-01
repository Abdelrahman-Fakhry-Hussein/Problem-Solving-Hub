// 10305 - Ordering Tasks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
#include <stack>
#include <vector>
using namespace std;
vector<vector<int>> Adj;
bool* visited;
stack<int> out;
void Topological_sort(int val)
{
    visited[val] = true;
    for (int i = 0; i < Adj[val].size(); i++)
    {
        if (!visited[Adj[val][i]])
            Topological_sort(Adj[val][i]);
    }
    out.push(val);

}
int main()
{

    int N, K, num1, num2;
    while (cin >> N >> K && N != 0) {
        Adj.clear();
        Adj.resize(N + 1);
        visited = new bool[N + 1];
        memset(visited, false, N + 1);
        visited[0] = true;
        for (int i = 0; i < K; i++)
        {
            cin >> num1 >> num2;
            Adj[num1].push_back(num2);
        }

        for (int i = 1; i <= N; i++)
        {
            if (!visited[i])
                Topological_sort(i);
        }
        int size = out.size();
        for (int i = 0; i < size; i++) {
            cout << out.top() << " \n"[i == size - 1];
            out.pop();
        }

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
