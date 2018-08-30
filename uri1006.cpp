#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	double a, b, c;
	cin>>a>>b>>c;
	double media1, media2, media3, media;
	media1 =a*2;
	media2 =b*3;
	media3 =c*5;
	media =(media1+media2+media3)/10;
	cout<<fixed;
	cout.precision(1);
	cout<<"MEDIA = "<<media<<"\n";
}