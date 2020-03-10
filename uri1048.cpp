#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	float salary, aux=0, contavel=0;
	cin>>salary;
	if(salary>=0.00 && salary<=400.00){
		aux=salary*(0.15);
		contavel=aux+salary;
		cout<<fixed;
		cout.precision(2);
		cout<<"Novo salario: "<<contavel<<"\n";
		cout<<"Reajuste ganho: "<<aux<<"\n";
		cout<<"Em percentual: "<<"15 %"<<"\n";
	}
	if(salary>=400.01 && salary<=800.00){
		aux=salary*(0.12);
		contavel=aux+salary;
		cout<<fixed;
		cout.precision(2);
		cout<<"Novo salario: "<<contavel<<"\n";
		cout<<"Reajuste ganho: "<<aux<<"\n";
		cout<<"Em percentual: "<<"12 %"<<"\n";
	}
	if(salary>=800.01 && salary<=1200.00){
		aux=salary*(0.10);
		contavel=aux+salary;
		cout<<fixed;
		cout.precision(2);
		cout<<"Novo salario: "<<contavel<<"\n";
		cout<<"Reajuste ganho: "<<aux<<"\n";
		cout<<"Em percentual: "<<"10 %"<<"\n";
	}
	if(salary>=1200.01 && salary<=2000.00){
		aux=salary*(0.07);
		contavel=aux+salary;
		cout<<fixed;
		cout.precision(2);
		cout<<"Novo salario: "<<contavel<<"\n";
		cout<<"Reajuste ganho: "<<aux<<"\n";
		cout<<"Em percentual: "<<"7 %"<<"\n";
	}
	if(salary>=2000.01){
		aux=salary*(0.04);
		contavel=aux+salary;
		cout<<fixed;
		cout.precision(2);
		cout<<"Novo salario: "<<contavel<<"\n";
		cout<<"Reajuste ganho: "<<aux<<"\n";
		cout<<"Em percentual: "<<"4 %"<<"\n";
	}
}
