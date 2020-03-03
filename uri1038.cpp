#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main () {
	float a, b, aux1=0;
	cin>>a>>b;
	if(a==1){
		aux1+=4.00*b;
	}
	if(a==2){
		aux1+=4.50*b;
	}
	if(a==3){
		aux1+=5.00*b;
	}
	if(a==4){
		aux1+=2.00*b;
	}
	if(a==5){
		aux1+=1.50*b;
	}
	cout<<fixed;
	cout.precision(2);
	cout<<"Total: R$ "<<aux1<<"\n";
}
