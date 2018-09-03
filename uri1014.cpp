#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	int x;
	float y;
	cin>>x>>y;
	float consumo;
	consumo = x/y;
	cout<<fixed;
	cout.precision(3);
	cout<<consumo<<" km/l"<<"\n";
}
