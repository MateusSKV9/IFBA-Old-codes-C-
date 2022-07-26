#include <iostream>
using namespace std;
main(){
	int a;
	int b, soma=0;
	cout<<"Digite um numero inicial:"; cin>>a;
	cout<<"Digite um numero final:"; cin>>b;
	while(a<b){
		cout<<a+2<<" ";
		a=a+2;
	soma=soma+a;
	
	}
	cout<<"soma:"<<soma;
}