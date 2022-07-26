# include <iostream>
using namespace std;
main (){
	int mat[3][3];
	int soma=0;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Insira um numero: ";
			cin>>mat[i][j];	
		}
	}
	cout<<"Matriz I\n";
	for (int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<mat[i][j]<< " ";
		}
		cout<<"\n";
		
	}
	cout<< "\n";
	cout<<"Matriz II\n";
	for (int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<mat[0][0]*mat[i][j]<< " ";
		}
		cout<<"\n";
	}
}