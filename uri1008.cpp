#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	int a, b;
	float c;
	cin>>a>>b>>c;
	float salario;
	salario = (b*c);
	cout<<"NUMBER = "<<a<<"\n";
	cout<<fixed;
	cout.precision(2);
	cout<<"SALARY = U$ "<<salario<<"\n";
}