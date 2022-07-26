# include <iostream>
using namespace std;
main ()
{
	int mat[3][3];
	int qtd=0;
	int qtd2=0;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << "Insira um numero: ";
			cin >> mat[i][j];

		}
	}
	for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout<<mat[i][j]<< " ";
			if(mat[i][j] % 2 == 0)
			{
				qtd++;
			}
			if (mat[i][j] % 2 != 0)
			{
				qtd2++;
			}
		}
		cout<<"\n";
	}
	cout << "\nQuantidade de umeros pares:"<<qtd;
	cout << "\nQuantidade de umeros impares:"<<qtd2;
}
