#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	float X, aux=0, aux1=0, z;
	for(int i=0; i<6; i++){
		cin>>X;
		if(X>0){
		aux++;
		aux1+=X;
		}
	z= aux1/aux;
	}
	cout<<aux<<" valores positivos"<<"\n";
	cout<<fixed;
	cout.precision(1);
	cout<<z<<"\n";
}
