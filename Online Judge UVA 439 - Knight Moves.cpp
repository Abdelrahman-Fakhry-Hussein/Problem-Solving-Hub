// Online Judge UVA 439 - Knight Moves.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=380

#include <iostream>
#include<string>
#include<queue>
#include<map>
#include <climits>
using namespace std;
int main()
{
    // link of the problem https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=380

    string input , output;
    while(cin>>input>>output && input != "EOF")

    {
    queue<int> outs;
   
    queue<pair<string,int>> q;
    q.push({input,0});
    map<string,int> m;
    while(q.size() > 0)
    {
        string val = q.front().first;
        int len = q.front().second;
     //   cout<<len<<endl;
        q.pop();
        if (val == output)
        {
            outs.push(len);
            continue;
        }
        if (m.find(val) != m.end()) {
       
            continue;
        }
        else {
            m[val] = true;
        }

       
       if( char(val[0] + 1) <= 'h' && int(val[1] - '0')+2 < 9)
       {
        std::string temp{char(val[0]+1)};
       
        if (m.find(temp+to_string((int(val[1] - '0')+2))) == m.end()) {
            m[val] = len+1;
            q.push({temp+to_string((int(val[1] - '0')+2)),len+1});
        }
       
       }
       
        if( char(val[0] - 1) >= 'a' && int(val[1] - '0')+2 < 9)
        {
        std::string temp{char(val[0]-1)};
        if (m.find(temp+to_string((int(val[1] - '0')+2))) == m.end()) {
            m[val] = len+1;
            q.push({temp+to_string((int(val[1] - '0')+2)),len+1});
        }
       
        }  
       
       if( char(val[0] + 1) <= 'h' && int(val[1] - '0')-2 > 0)
       {
        std::string temp{char(val[0]+1)};
        if (m.find(temp+to_string((int(val[1] - '0')-2))) == m.end()) {
            m[val] = len+1;
            q.push({temp+to_string((int(val[1] - '0')-2)),len+1});
        }
       
       }        
       
        if( char(val[0] - 1) >= 'a' && int(val[1] - '0')-2 > 0)
        {
        std::string temp{char(val[0]-1)};
        if (m.find(temp+to_string((int(val[1] - '0')-2))) == m.end()) {
            m[val] = len+1;
            q.push({temp+to_string((int(val[1] - '0')-2)),len+1});
        }
       
        }  
       
       
        if( char(val[0] + 2) <= 'h' && int(val[1] - '0')+1 < 9)
       {
        std::string temp{char(val[0]+2)};
        if (m.find(temp+to_string((int(val[1] - '0')+1))) == m.end()) {
            m[val] = len+1;
            q.push({temp+to_string((int(val[1] - '0')+1)),len+1});
        }
       }
       if( char(val[0] + 2) <= 'h' && int(val[1] - '0')-1 > 0)
       {
        std::string temp{char(val[0]+2)};
        if (m.find(temp+to_string((int(val[1] - '0')-1))) == m.end()) {
            m[val] = len+1;
            q.push({temp+to_string((int(val[1] - '0')-1)),len+1});
        }
       
       }        
        if( char(val[0] - 2) >= 'a' && int(val[1] - '0')+1 < 9)
        {
        std::string temp{char(val[0]-2)};
        if (m.find(temp+to_string((int(val[1] - '0')+1))) == m.end()) {
            m[val] = len+1;
            q.push({temp+to_string((int(val[1] - '0')+1)),len+1});
        }
       
        }  
        if( char(val[0] - 2) >= 'a' && int(val[1] - '0')-1 > 0)
        {
        std::string temp{char(val[0]-2)};
        if (m.find(temp+to_string((int(val[1] - '0')-1))) == m.end()) {
            m[val] = len+1;
            q.push({temp+to_string((int(val[1] - '0')-1)),len+1});
        }
       
        }  
       
       
    }
    int min_value = INT_MAX;
    std::size_t size = outs.size();
    while (size-- > 0) {
        int x = outs.front();
        outs.pop();
        outs.push(x);
        if (x < min_value)
            min_value = x;
    }
    cout<<"To get from "<<input<<" to "<<output<<" takes "<<min_value<<" knight moves.\n";
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
