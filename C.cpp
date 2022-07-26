# include <iostream>
using namespace std;
main ()
{
	int mat[4][4];
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			cout << "\nInsira um numero: ";
			cin >> mat[i][j];

		}
	}
	for (int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			if(mat[i][j] % 2 == 0)
			{
				cout << mat[i][j] << "\n";
			}
			if (mat[i][j] % 2 != 0)
			{
				cout << " ";
			}
		}
		cout << "\n";
	}
}
