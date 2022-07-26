# include <iostream>
using namespace std;
main ()
{
	int mat[2][4];
	int NumM = 0;
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			cout << "\nInsira um numero: ";
			cin >> mat[i][j];

		}
	}
	for (int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			cout << mat[i][j] << " ";
			if(mat[i][j] > NumM)
			{
				NumM = mat[i][j];
			}
		}
		cout<<"\n";
	}
	cout << "\nMaior numero digitado:" << NumM;
}
