#include <iostream>
using namespace std;
main (){
	int s,z,y,x;
		cout<<"1(x). Imposto\n";
		cout<<"2(y). Novo salario\n";
		cout<<"3(z). Classificacao\n";
		cout<<"Digite opcao desejada\n\n";
		cout<<"Digite o salario\n"; cin>>s;
		switch (x){
			case 'A':
				if (500>=s)
					cout<<"Imposto:"<<s*0.05;
				else if (500<s<850)
					cout<<"Imposto:"<<s*0.1;
				else 
					cout<<"Imposto:"<<s*0.15;
				break;	
		}
		switch (y){
			case 'B':
				if (s>1500)
					cout<<"Imposto:"<<s+25;
				else if (700<s<1500)
					cout<<"Imposto:"<<s+50;
				else 
					cout<<"Imposto:"<<s+100;
				break;	
		}
		switch (z){
			case 'B':
				if (s>750)
					cout<<"Bem remunerado";
				else if (700<s)
					cout<<"Mal remunerado";
				break;	
		}
	
}