// Codeforces 242 D2 C. King's Path.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem https://codeforces.com/contest/242/problem/C
#include <iostream>
#include <queue>
#include <map>
#include <climits>
using namespace std;

struct Triple {
    int first;
    int second;
    int third;

    Triple(int f, int s, int t) : first(f), second(s), third(t) {}
};

int main() 
{
    // link of the problem https://codeforces.com/contest/242/problem/C
    
    int x0, y0, x1, y1, n;
    cin >> x0 >> y0 >> x1 >> y1;
    cin >> n;

    map<pair<int, int>, bool> visited;
    map<pair<int, int>, bool> exist;
    exist[{x0, y0}] = true;
    exist[{x1, y1}] = true;
    int **arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[3];
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
        for (int j=arr[i][1];j<=arr[i][2];j++)
            exist[{arr[i][0], j}] = true;
       
    }

    // Initialize visited map with starting position
    visited[{x0, y0}] = true;

    // Queue for BFS, storing x, y, and number of steps taken
    queue<Triple> q;
    q.push(Triple(x0, y0, 0));

    int min_value = INT_MAX;  // To track the minimum steps to reach (x1, y1)
    int dx[]={1,1,1,-1,-1,-1,0,0};
    int dy[]={1,0,-1,1,0,-1,1,-1};
   
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        int c = q.front().third;
        q.pop();

        // Check if we've reached the destination
        if (x == x1 && y == y1) {
            min_value = min(min_value, c);
            // Once found, continue searching for other possible paths
            break;
        }

            for(int j = 0;j<8;j++)
            {
                int v1= x+dx[j];
                int v2 = y+dy[j];
               
                std::pair<int, int> to_check = std::make_pair(v1, v2);
                auto it = visited.find(to_check);
                auto it2 = exist.find(to_check);
                 if (it == visited.end()  && it2 != exist.end())
                 {
                     visited[to_check] = true;  
                    q.push(Triple(v1,v2,c+1));
                 }
            }
             
               
       
    }

    // Output the result
    if (min_value == INT_MAX) {
        cout << -1 << endl;  // Destination unreachable
    } else {
        cout << min_value << endl;  // Minimum steps to reach destination
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
