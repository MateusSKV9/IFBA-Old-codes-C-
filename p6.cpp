#include <iostream>
using namespace std;
main ()
{
	int num[6];
	int qtd = 0;
	int soma = 0;
	for(int i = 0; i < 6; i++)
	{
		cout << "Insira um numero:";
		cin >> num[i];
	}
	cout << "\nNumeros impares:" << " ";
	for (int i = 0; i < 6; i++)
	{
		if(num[i] % 2 != 0)
			cout << num[i] << " ";
	}
	cout << "\n\nNumeros pares:" << " ";
	for (int i = 0; i < 6; i++)
	{
		if(num[i] % 2 == 0)
		{
			cout << num[i] << " ";
			soma = soma + num[i];
		}
	}
	cout << "\n\nSoma das notas pares:" << soma;
	for (int i = 0; i < 6; i++)
	{
		if(num[i] % 2 != 0)
		{
			qtd++;
		}
	}
	cout << "\n\nQuantidade de numeros impares:" << qtd << "\n";
}
