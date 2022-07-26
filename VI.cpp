#include <iostream>
using namespace std;
int soma(){
int x, y, soma2=0;
cout<<"Digite o numero incial do intervalo: "; cin>> x;
cout<<"Digite o numero final do intervalo: "; cin>> y;
for (int x=0; x<y; x++){
	soma2=soma2+x;}
	cout<<"\nA soma dos numeros do intervalo e: "<<soma2<<"\n";
}
main(){
	soma ();
} 