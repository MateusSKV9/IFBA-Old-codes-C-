#include <iostream>
using namespace std;
main ()
{
	int qtd = 0;
	int num[qtd];
	for(int i = 0; i < qtd ; i++)
	{
		cout << "Insira um numero:";
		cin >> num[i];
	}
	cout << "Quantidade de numeros do vetor:\n";
	for (int i = 0; i < 30; i++)
	{
		if(num[i]<999999)
			qtd++;
	}
	cout << "\n\nQuantidade de numeros iguais a 10:" << qtd << "\n";

}

