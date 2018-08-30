#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	double a, b;
	cin>>a>>b;
	double media1, media2, media;
	media1 =a*3.5;
	media2 =b*7.5;
	media =(media1+media2)/11;
	cout<<fixed;
	cout.precision(5);
	cout<<"MEDIA = "<<media<<"\n";
}