#include <iostream>
using namespace std;
int main() {
	float X, aux=0;
	for(int i=0; i<6; i++){
		cin>>X;
		if(X>0){
		aux++;
		}
	}
	cout<<aux<<" valores positivos"<<"\n";
}
