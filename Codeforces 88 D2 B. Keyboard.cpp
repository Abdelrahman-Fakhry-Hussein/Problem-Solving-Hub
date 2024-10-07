// Codeforces 88 D2 B. Keyboard : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem http://codeforces.com/contest/88/problem/B
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include<math.h>
using namespace std;

double distanceCalculate(double x1, double y1, double x2, double y2)
{
	double x = x1 - x2; //calculating number to square in next step
	double y = y1 - y2;
	double dist;

	dist = pow(x, 2) + pow(y, 2);       //calculating Euclidean distance
	return dist;
}
int main() 
{
   // link of the problem http://codeforces.com/contest/88/problem/B

    int n,m,d,num_ch,out=0;
    cin >> n>>m>>d;
    vector<int> m_x(n * m+1);
    vector<int> m_y(n * m+1);
    map<int, int> exist;
    map<int, int> out_val;
    vector<int> S_x;
    vector<int> S_y;
  
    for(int i=1;i<=n*m;i++)
    {
        
            char inp;
            cin >>inp;
            if(inp == 'S')
            {
                
                S_x.push_back(((i-1)/m) +1);
                S_y.push_back(((i-1)%m) +1);
                 m_x[i]=-1;
                continue;
            }
            m_x[i]=inp-'a';
            m_y[i]=inp-'a';
        exist[inp-'a']=1;
    }
    for(int i=1;i<=n*m;i++)
    {
        if(m_x[i] == -1)
            continue;
        int key = m_x[i];  
        int value_x = ((i-1)/m) +1;
        int value_y = ((i-1)%m) +1;
       
        if( S_x.size()==0)
        {
           break;
        }
        int min_dis=distanceCalculate(value_x,value_y,S_x[0],S_y[0]);
        for(int i =1;i<S_x.size();i++)
        {
            int temp =distanceCalculate(value_x,value_y,S_x[i],S_y[i]);
            if(temp < min_dis)
            {
                min_dis = temp;
            }
        }
        if(out_val.find(key) == out_val.end()){ 
            if (d*d < min_dis)
                out_val[key]=1;
            else    
                out_val[key]=0;
         
        }
        else
        {
            if (d*d >= min_dis && out_val[key] == 1)
                out_val[key]=0;
            
        }
       
         
    }
    
    
    m_x[tolower('S')-'a'] = 0;
    string s;
    cin>>num_ch>>s;
    for (char c : s) {
        
        if(exist.find(tolower(c)-'a') == exist.end()){ 
             cout<<-1<<endl;
            return 0;
        }
        else 
        {
            if (islower(c)) 
            {
                
            } 
            else if (isupper(c) && S_x.size()>0 ) 
            {
                  out+=out_val[tolower(c)-'a'];
            }
            else
            {
                 cout<<-1<<endl;
            return 0;
            }
        }
    }
    cout << out<<endl;

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
