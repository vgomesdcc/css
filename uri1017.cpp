#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main () {
	int tempo, vm;
	cin>>tempo>>vm;
	float litros;
	litros = (tempo*vm)/12.00;
	cout<<fixed;
	cout.precision(3);
	cout<<litros<<"\n";
}
