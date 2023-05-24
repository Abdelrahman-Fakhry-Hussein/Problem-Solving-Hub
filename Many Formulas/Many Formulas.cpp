#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;
 
long long int fun(string s1, int i, string s2);
 
int main()
{
 
 
    string s,h="";
    cin >> s;
    long long int val= fun(s, 0, h);
   cout << val << endl;
  
 
 
    return 0;
}

long long int fun(string s1, int i, string s2)
{
    long long int resu=0;
    if (s1.length() == i)
    {
        std::stringstream issa(s2);
      
        string s;
        int o = 0;
       
        while (std::getline(issa, s, ' ')) {
            if (s.compare(" ")>0)
            {
             
                resu += stoll(s);
 
            }
            
        }
    }
    
        for (int j = s1.length() - 1; j >= i; j--)
        {
            string sub = s1.substr(i, j - i + 1);
            resu += fun(s1, j + 1, s2 + " "  + sub);
        }
        return resu;
    
}