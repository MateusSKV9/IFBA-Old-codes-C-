# include <iostream>
using namespace std;
main ()
{
	int mat[3][4];
	int num;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << "Insira um numero para preencher a matriz: ";
			cin >> mat[i][j];

		}
	}
	cout<<"Agora digite um numero:"; cin>>num;
	for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(num==mat[i][j])
			{
				cout<<"posicao:"<<mat[i][j];
			}
			else if(num!=mat[i][j])
			{
				cout<<"Esse numero nao esta na matriz";
			}
					
			
		}
		cout<<"\n";
	}
}
