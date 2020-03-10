#include <iostream>
using namespace std;
int main () {
	int X=5, z, par=0, impar=0, positivo=0, negativo=0;
	for(int i=0; i<X; i++){
		cin>>z;
		if(z>0){
			positivo++;
		}
		if(z<0){
			negativo++;
		}
		if(z%2==0){
			par++;
		}
		if(z%2!=0){
			impar++;
		}
	}
	cout<<par<<" valor(es) par(es)"<<"\n";
	cout<<impar<<" valor(es) impar(es)"<<"\n";
	cout<<positivo<<" valor(es) positivo(s)"<<"\n";
	cout<<negativo<<" valor(es) negativo(s)"<<"\n";
}
