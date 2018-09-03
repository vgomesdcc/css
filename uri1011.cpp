#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	double r;
	cin>>r;
	double area;
	area = (4.0/3)* 3.14159*(r*r*r);
	cout<<fixed;
	cout.precision(3);
	cout<<"VOLUME = "<<area<<"\n";
}
