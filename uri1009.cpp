#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	string ganhador;
	cin>>ganhador;
	double a, b, porcento;
	cin>>a>>b;
	double salario;
	porcento = b*0.15;
	salario = a+porcento;
	cout<<fixed;
	cout.precision(2);
	cout<<"TOTAL = R$ "<<salario<<"\n";
}