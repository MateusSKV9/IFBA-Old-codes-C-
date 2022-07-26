#include <iostream>
using namespace std;
main (){
	float idade, sexo;
	cout<<"Digite idade:";cin>>idade;
	cout<<"Digite seu sexo (1-masculino ou 2-feminino):";cin>>sexo;
	if(sexo==1){
		if(idade>=25)
		cout<<"Preco eh 50 reais:";
	else if (idade<25 && idade>=21)
		cout<<"Preco eh 300 reais";
	else if (idade<21 && idade >=18)
		cout<<"Preco eh 20 reais";
	else if (idade<18)
		cout<<"Nao pode entrar";

	}
else if (sexo==2){
	if (idade>=25)
		cout<<"Preco eh 40 reais";
	else if (idade<25 && idade>=21)
		cout<<"Preco eh 25 reais";
	else if(idade<21 && idade>=18)
		cout<<"Preco eh 15 reais";
	else if (idade<18)
		cout<<"Nao pode entrar"; }

}