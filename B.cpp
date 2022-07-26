# include <iostream>
using namespace std;
main (){
	int mat[5][3];
	int soma=0;
	for(int i=0; i<5; i++){
		for(int j=0; j<3; j++){
			cout<<"Insira um numero: ";
			cin>>mat[i][j];
			
		}
	}
	for (int i=0; i<5; i++){
		for(int j=0; j<3; j++){
			cout<<mat[i][j]<< " ";
			soma=soma+mat[i][j];
		}
		cout<<"\n";
	}
	cout<<"\nSoma dos elementos:"<<soma;
}