#include <iostream>
using namespace std;
int soma (int n1, int n2){
	float resultado =(n1+n2);
	float media= resultado/2;
	return media;
}
main(){
	float x,y, resultado;
	cout<<"Digite um numero:"; cin>> x;
	cout<<"Digite outro numero"; cin>> y;
	resultado = soma(x, y);
	cout<<"A media dos dois numeros e:"<<resultado;
}