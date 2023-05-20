// ConsoleApplication30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int check_cases(int* arr, int i, int j, int num_words);
void co(int* arr, int* des, int num_words);
bool checked(int* arr, int i, int j, int num_words);
int main()
{

    int num_words = 0;
    // cin >> num_words;
    string input;
    while (cin >> num_words && num_words >0)
    {
        cin.ignore(100, '\n');
        int* arr = new int[num_words * num_words];

        for (int i = 0; i < num_words; i++) {
            getline(cin, input);
            for (int j = 0; j < num_words; j++) {
                
                if (input[j] == '.')
                {
                    *(arr + i * num_words + j)=0;
                }
                else
                {
                  *(arr + i * num_words + j)=-1;
                }
                // Assign values to
                // the memory block
          
            }
        }
        int max = 0;
        for (int i = 0; i < num_words; i++) {
            for (int j = 0; j < num_words; j++) {
               // cout << "i = "<< i << "j = " << j << endl;
                int * dest = new int[num_words * num_words];
                co(arr, dest, num_words);

               int res=check_cases(dest, i,j, num_words);
               int ress = 0;
               if (i != 0 && j != 0)
               {
                ress = check_cases(dest, 0, 0, num_words);

               }
              // cout << res + ress << "             " << "----------------------------"<<endl;
               if (res + ress > max)
               {
                   max = res + ress;
               }
             //  cout<< res << "********************************************" << endl;
            }
        }
        cout << max <<endl;

    }




    return 0;
}
bool checked(int* arr, int i, int j, int num_words)
{
    bool u = true;

    for (int k = j ; k < num_words; k++)
    {
         if (*(arr + i * num_words + k) == -1)
        {
            break;
        }
        else if (*(arr + i * num_words + k) == 2)
        {
            // cout << "Ai = " << i << "j = " << j << endl;  
            u = false;
            break;
        }
    }

    for (int k = j; k >= 0; k--)
    {
        if (*(arr + i * num_words + k) == -1)
        {
            break;
        }
        else if (*(arr + i * num_words + k) == 2)
        {
            //  cout << "Bi = " << i << "j = " << j << endl;
            u = false;
            break;
        }

    }

    for (int k = i ; k >= 0; k--)
    {

      if (*(arr + k * num_words + j) == -1)
        {
            break;
        }
        else if (*(arr + k * num_words + j) == 2)
        {
            //cout << "Ci = " << i << "j = " << j << endl;
            u = false;
            break;
        }
    }

    for (int k = i ; k < num_words; k++)
    {

       if (*(arr + k * num_words + j) == -1)
        {
            break;
        }
        else if (*(arr + k * num_words + j) == 2)
        {
            //  cout << "Di = " << i << "j = " << j << endl;
            u = false;
            break;
        }
    }

    return u;

}
void co(int* arr, int * des, int num_words)
{
    for (int i = 0; i < num_words; i++) {
        for (int j = 0; j < num_words; j++) {
           
                *(des + i * num_words + j) = *(arr + i * num_words + j);
         
            // Assign values to
            // the memory block

        }
    }
}
int check_cases(int* arr,int i, int j ,int num_words)
{
    int f = 0;
    
    
    if (*(arr + i * num_words + j) == 0)
    {
     
       

        if (checked(arr,i,j, num_words) == true)
        {
            *(arr + i * num_words + j) = 2;
            f = 1;

        }
     
   /*cout << "Start " << endl;
        for (int ii = 0; ii < num_words; ii++) {
            for (int ij = 0; ij < num_words; ij++) {

                // Print values of the
                // memory block
                cout << *(arr + ii * num_words + ij)
                    << " ";
            }
            cout << endl;
        }
        cout << "End" << endl;*/
       
       
        j++;
    if (j == num_words)
    {
        i += 1;
        j = 0;
    }
    if (i == num_words && j == 0)
    {
        return f;
    }else
    {
     f+= check_cases(arr, i, j, num_words);
   return f;
    }
    }
    else
    {
        j++;
        if (j == num_words)
        {
            i += 1;
            j = 0;
        }
        if (i == num_words && j == 0)
        {
            return f;
        }
        else
        {
            f += check_cases(arr, i, j, num_words);
            return f;
        }
    }
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
