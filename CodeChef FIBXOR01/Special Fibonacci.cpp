// ConsoleApplication36.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
int* da;
int  fun(int  n, int  a, int  b)
{
	
		cout <<n << endl;
	
	
	if (n == 0)
	{
		return a;
	}
	else if (n == 1)
	{
		return b;
	}
	else
	{
	//	cout << n << endl;
		int res1 = fun(n - 1, a, b);
		//da[n] = res1;
		int res2 = fun(n - 2, a, b);
	int res = res1 ^ res2;
	//cout << res << endl;
	return res;
	}
	
}

int main() {
	// your code goes here
	int num = 0;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		string  n, b ,a;
		cin >> a >> b >> n;
		
		int  nn = stoi(n), bn= stoi(b), an= stoi(a);

		if (nn % 3 == 0)
			cout << an << endl;
		else if (nn % 3 == 1)
			cout << bn << endl;
		else cout << (an ^ bn) <<endl;


		da = new int[nn+1];
		for (int i = 0; i <= nn; i++)
			da[i] = -1;
		//cout << an << endl << bn << endl << nn;
		//cout<< fun(nn, an, bn)<<endl;

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
