#include <iostream>
using namespace std;
main ()
{
	int num[10];
	int soma = 0;
	for(int i = 0; i < 10; i++)
	{
		cout << "Insira um numero:";
		cin >> num[i];
	}
	for(int i = 0; i < 10; i++)
	{
		soma = soma + num[i];
	}
	cout << "\nSoma dos numeros: " << soma;
	cout<<"\nNumeros maiores que 50:";
	for (int i = 0; i < 10; i++)
	{
		if(num[i] > 50)
			cout << num[i]<< " ";
	}
	cout<<"\nSe nao apareceu nenhum numero, entao nao existem maiores que 50\n";
}


