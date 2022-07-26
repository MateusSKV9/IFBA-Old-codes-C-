#include <iostream>
using namespace std;
int soma (int n1, int n2)
{
	float resultado1 = (n1 + n2);
	return resultado1;
}
int subtracao (int n1, int n2)
{
	float resultado2 = (n1 - n2);;
	return resultado2;
}
int multiplicacao (int n1, int n2)
{
	float resultado3 = (n1 * n2);
	return resultado3;
}
int divisao (int n1, int n2)
{
	float resultado4 = (n1/n2);
	return resultado4;
}
main()
{
	float x, y, resultado2, resultado3, resultado4;
	cout << "Digite um numero:";
	cin >> x;
	cout << "Digite outro numero";
	cin >> y;
	resultado1 = soma(x, y);
	resultado2 = subtracao (x, y);
	resultado3 = multiplicacao (x, y);
	resultado4 = divisao (x, y);
	cout << "A soma dos dois numeros e:" << resultado1<< "\n";
	cout << "A subtracao dos dois numeros e:" << resultado2 <<"\n";
	cout << "A multiplacao dos dois numeros e:" << resultado3 << "\n";
	cout << "A divisao dos dois numeros e:" << resultado4 <<"\n";
}
