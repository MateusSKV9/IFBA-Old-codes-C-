# include <iostream>
using namespace std;
main ()
{
	int mat[3][3];
	int qtd=0;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << "\nInsira um numero: ";
			cin >> mat[i][j];

		}
	}
	for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(mat[i][j] > 10)
			{
				qtd++;
			}
		}
	}
	cout << "\nNumeros maiores que 10:"<<qtd;
}
