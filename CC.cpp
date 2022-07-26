# include <iostream>
using namespace std;
main (){
	int mat[4][5];
	int soma=0;
	for(int i=0; i<4; i++){
		for(int j=0; j<5; j++){
			cout<<"Insira um numero: ";
			cin>>mat[i][j];
			
		}
	}
	for (int i=0; i<4; i++){
		for(int j=0; j<5; j++){
			cout<<mat[i][j]<< " ";
			soma=(mat[0][0]+mat[1][1]+mat[2][2]+mat[3][3]);
		}
		cout<<"\n";
	}
	cout<<"\nSoma dos elementos da diagonal principal:"<<soma;
}