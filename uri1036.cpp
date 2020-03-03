#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main () {
	double A, B, C, d, e, f, g;
	cin>>A>>B>>C;
	d= B*B-4*A*C;
	e= pow(d,.5);
	cout<<fixed;
	cout.precision(5);
	if(d<0||A==0)
        cout<<"Impossivel calcular"<<"\n";
    else
    {
        f=(-B+e)/(2*A);
        g=(-B-e)/(2*A);
        cout<<"R1 = "<<f<<"\n";
        cout<<"R2 = "<<g<<"\n";
    }
}
