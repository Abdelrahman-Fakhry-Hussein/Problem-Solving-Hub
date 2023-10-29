// ConsoleApplication43.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
using namespace std;
int BFS(char **& arr, int i, int j);
//char arr[30][30];
int sizee = 0;
int main()
{
    int count = 1;
    while (cin>>sizee)
    {
        int  out = 0;
        //cin >> size;
        char **arr = new char* [sizee];
        for (int ii = 0; ii < sizee; ii++)
        {
            arr[ii] = new char[sizee];
        }

        for (int i = 0; i < sizee; ++i) {
            for (int j = 0; j < sizee; ++j) cin >> arr[i][j];
        }

       
        for (int i = 0; i < sizee; i++)
        {
            for (int j = 0; j < sizee; j++)
            {
                if (arr[i][j] == '1')
                {
                    BFS(arr, i,j);
                    out++;
                    
                }
            }
        }
  
        printf("Image number %d contains %d war eagles.\n", count++, out);
    }

    return 0;
}
int BFS(char **&arr,int i,int j)
{
    queue<int> q;
 
    q.push(i);
    while (q.size() != 0)
    {
         int val = q.back();
        q.pop();
        arr[i][j] = '0';
        if (i - 1 > -1 && j - 1 > -1 && arr[i - 1][j - 1] == '1')
        {
           
                BFS( arr,i - 1, j - 1);
            
        }


        if (i - 1 > -1 && arr[i - 1][j] == '1')
        {
                BFS(arr, i - 1, j );

        }


        if (i - 1 > -1 && j+1 < sizee && arr[i - 1][j + 1] == '1')
        {
          
                BFS(arr, i - 1, j + 1);

        }


       

        if (j - 1 > -1 && arr[i][j - 1] == '1')
        {
           
                BFS(arr, i, j - 1);
          

        }



        if (j + 1 < sizee && arr[i][j + 1] == '1')
        {
                BFS(arr, i, j + 1);
        }

      

        if (i + 1 < sizee && j - 1 > -1 && arr[i + 1][j - 1] == '1')
        { 
                BFS(arr, i + 1, j - 1);
        }


        if (i + 1 < sizee && arr[i + 1][j] == '1')
        {
                BFS(arr, i + 1, j);
         
        }


        if (i + 1 < sizee && j + 1 < sizee && arr[i + 1][j + 1] == '1')
        {
           
                BFS(arr, i + 1, j + 1);
            
        }


          
        }
    
    return 1;
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
