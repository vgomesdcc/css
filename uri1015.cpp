#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main () {
	float x1, y1, x2, y2;
	cin>>x1>>y1;
	cin>>x2>>y2;
	float distancia, result;
	distancia = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	result = sqrt(distancia);
	cout<<fixed;
	cout.precision(4);
	cout<<result<<"\n";
}
