#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	double r, pi;
	cin>>r;
	pi=3.14159;
	double area;
	area = (pi*(r*r));
	cout<<fixed;
	cout.precision(4);
	cout<<"A="<<area<<"\n";
}