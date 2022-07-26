#include <iostream>
using namespace std;
float peso1(){
float A, p2=0;
char sex, F, M;
cout<<"Insira sua altura: "; cin>>A;
cout<<"Insira o sexo - Femino (F) ou masculino(M): "; cin>> sex;
if(sex=M){
	p2=72.7*A-58;}
if (sex=F){
	p2=62.1*A-44.7;}
	return p2;
}
main(){
	float p2=peso1();
	cout<<"Peso ideal:"<<p2;
}
