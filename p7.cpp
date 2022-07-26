
#include <iostream>
using namespace std;
main ()
{
	int num[30];
	int qtd=0;
	for(int i = 0; i <30 ; i++)
	{
		cout << "Insira um numero:";
		cin >> num[i];
	}
	for (int i = 0; i < 30; i++)
	{
		if(num[i]==10)
			qtd++;
	}
	cout << "\n\nQuantidade de numeros iguais a 10:" << qtd << "\n";
}
