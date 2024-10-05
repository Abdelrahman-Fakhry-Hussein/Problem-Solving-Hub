// Codeforces 766 D2 B. Colorful Field.cpp : This file contains the 'main' function. Program execution begins and ends there.
// link of the problem http://codeforces.com/contest/766/problem/B
#include <iostream>
using namespace std;

int main() 
{
	// link of the problem http://codeforces.com/contest/766/problem/B

   int rows, cols, waste, empty;
    cin >> rows >> cols >> waste>> empty;
    rows*=cols;
    int* val = new int [waste]();
    for(int i =0;i<waste;i++)
    {
        int tempi,tempj;
       
        cin>>tempi>>tempj;
         tempi-=1;
        val[i] = (tempi*cols)+tempj;
     
    }
   
    
    for(int i =0;i<empty;i++)
    {
         int tempii,tempjj, temps ;
        cin>>tempii>>tempjj;
        tempii-=1;
        int temp_val = 1;
        temps = (tempii*cols)+tempjj;
        
        for(int j =0;j<waste;j++)
        {
            if (val[j] == temps)
            {
            temp_val = -1;
            break;
            }
            else if(val[j]<temps)
            temp_val++;
         
        }
       
        if(temp_val == -1)
        {
            cout<<"Waste"<<endl;
        }
        else if((temps-temp_val)%3 == 0)
        {
            cout<<"Carrots"<<endl;
        } else if((temps-temp_val)%3 == 1)
        {
            cout<<"Kiwis"<<endl;
        }
         else  if((temps-temp_val)%3 == 2)
        {
            cout<<"Grapes"<<endl;
        }
     
    }
    
    delete[] val;
   

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
