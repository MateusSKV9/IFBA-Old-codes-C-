# include <iostream>
using namespace std;
main ()
{
	int mat[4][4];
	int qtd = 0;
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			cout << "Insira um numero: ";
			cin >> mat[i][j];

		}
	}
	for (int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			if(mat[i][j] == 0)
			{
				qtd++;
			}
		}
	}
	cout << "\nQuantidade de numeros maiores que 0:" << qtd;
}
