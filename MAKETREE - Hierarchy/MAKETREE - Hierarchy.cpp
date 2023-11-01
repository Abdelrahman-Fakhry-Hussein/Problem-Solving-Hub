// MAKETREE - Hierarchy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <stack>
using namespace std;
bool* visited;
stack<int> out;
vector< vector<int>> Adj;
void Topological_Sort(int val) {
    visited[val] = true;
    for (int i = 0; i < Adj[val].size(); i++)
    {
        if (!visited[Adj[val][i]])
            Topological_Sort(Adj[val][i]);
    }
    out.push(val);
}
int main()
{

    int N, K, num, num2;
    cin >> N >> K;
    int* Parents = new int[N + 1];
    Adj.resize(N + 1);
    //int* parents = new int[N + 1];

    visited = new bool[N + 1];
    visited[0] = true;
    for (int i = 1; i <= N; i++)
    {
        visited[i] = false;
    }
    for (int i = 1; i <= K; i++)
    {
        cin >> num;
        for (int j = 0; j < num; j++)
        {
            cin >> num2;
            Adj[i].push_back(num2);
        }

    }

    for (int i = 1; i <= N; i++)
    {
        if (!visited[i])
            Topological_Sort(i);

    }

    // Loop over the elements within each set
    int parent = 0;
    while (!out.empty()) {
        int i = out.top(); // Print the top element
        Parents[i] = parent;
        parent = i;
        out.pop(); // Remove the top element
    }

    for (int i = 1; i <= N; i++) {
        printf("%d\n", Parents[i]);
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
