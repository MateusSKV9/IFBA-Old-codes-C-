#include <iostream>
using namespace std;
main (){

	float cod, x,p;
	cout<<"\t\t\tCARDAPIO\n\n";
	cout<<"ESPECIFICACAO\t\t"; cout<<"CODIGO\t\t"; cout<<"PRECO\t\n";
	cout<<"Bauru\t\t\t"; cout<<"101\t\t"; cout<<"1.10\n";
	cout<<"Hamburguer\t\t"; cout<<"103\t\t"; cout<<"1.20\n";
	cout<<"Cheeseburguer\t\t"; cout<<"104\t\t"; cout<<"1.30\n";
	cout<<"Refrigerante\t\t"; cout<<"105\t\t"; cout<<"1.00\n\n";
	cout<<"Digite o codigo do seu pedido\n"; cin>> cod;
	cout<<"Digite a quantidade\n"; cin>> x;
	
	
		switch('cod'){
		case 101:
			cout<<"O valor a ser pago e:"<<1.10*x;
			break;
		case 103:
			cout<<"O valor a ser pago e:"<<1.20*x;
			break;
		case 104:
			cout<<"O valor a ser pago e:"<<1.30*x;
			break;
		case 105:
			cout<<"O valor a ser pago e:"<<1.00*x;
			break;
		}
		cout<<"Insira o pagamento\n"; cin>>p;
		{
			if (101)
				if (p>1.10*x);
				cout<<"\nSeu troco caso teha sido o cod. 101:\n"<<p-(1.10*x);
				if (p>1.20*x);
				cout<<"\nSeu troco caso teha sido o cod. 103:\n"<<p-(1.20*x);
			if (p>1.30*x);
				cout<<"\nSeu troco caso teha sido o cod. 103:\n"<<p-(1.30*x);
			if (p>1.00*x);
				cout<<"\nSeu troco caso teha sido o cod. 103:\n"<<p-(1.00*x);
		}
		
}

	