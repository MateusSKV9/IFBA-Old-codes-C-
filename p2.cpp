#include <iostream>
using namespace std;
main ()
{
	int num[10];
	for(int i = 0; i < 10; i++)
	{
		cout << "Insira um numero:";
		cin >> num[i];
	}
		for(int i = 9; i!=-1; i--)
	{
		cout <<num[i]<<" ";
	}
	
}
