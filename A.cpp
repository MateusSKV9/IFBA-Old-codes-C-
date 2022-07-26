# include <iostream>
using namespace std;
main (){
	int mat[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Insira um numero: ";
			cin>>mat[i][j];
			
		}
	}
	for (int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<mat[i][j]<< " ";
		}
		cout<<"\n";
	}
}