#include <iostream>
using namespace std;
main ()
{
	int num[9];
	for(int i = 0; i < 9; i++)
	{
		cout << "Insira um numero:";
		cin >> num[i];
	}
	cout<<"Numeros impares:\n";
	for (int i = 0; i < 9; i++)
	{
		if(num[i]%2!=0)
			cout << num[i]<< " ";
	}
	
}
