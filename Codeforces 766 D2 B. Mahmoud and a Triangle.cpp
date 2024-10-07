// Codeforces 766 D2 B. Mahmoud and a Triangle : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem https://codeforces.com/contest/766/problem/B
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int n,flag=0;
    cin >> n;
    vector<int> arr(n);
   
 
    for (int i = 0; i < n; i++) {
        
        cin >> arr[i]; // Read each element
      
    }
    sort(arr.begin(), arr.end());

    for (int i = 2; i < n; i++) {

     if(arr[i-2]+arr[i-1] > arr[i])
           {
              cout << "YES" << endl; 
             return 0;
           }
    }
  
      cout << "NO" << endl;
    
     
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
