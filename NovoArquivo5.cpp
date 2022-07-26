#include <iostream>
using namespace std;
main(){
	float a, quant=0, soma=0;
	cout<<"Digite um numero (0 para parar):";
	cin>>a;
	while(a!=0)
	{
		cout<<"Digite um numero (0 para parar):";
		cin>>a;
		a++;
		soma=soma+a;
		quant++;
		cout<<"Quantidade:"<<quant;
		cout<<"Soma:"<<soma;
		cout<<"Soma:"<<(soma)/quant;
		
	}
}
