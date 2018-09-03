#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	double a, b, c;
	cin>>a>>b>>c;
	double Tri, Circ, Trap, Quad, Retang;
	Tri = (a*c)/2;
	Circ = (c*c)*3.14159;
	Trap = ((a+b)*c)/2;
	Quad = b*b;
	Retang = a*b;
	cout<<fixed;
	cout.precision(3);
	cout<<"TRIANGULO: "<<Tri<<"\n";
	cout<<"CIRCULO: "<<Circ<<"\n";
	cout<<"TRAPEZIO: "<<Trap<<"\n";
	cout<<"QUADRADO: "<<Quad<<"\n";
	cout<<"RETANGULO: "<<Retang<<"\n";
}
