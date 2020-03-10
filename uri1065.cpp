#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int X, aux=0;
	for(int i=0; i<5; i++){
		cin>>X;
		if(X%2==0){
		aux++;
		}
	}
	cout<<aux<<" valores pares"<<"\n";
}
