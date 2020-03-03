#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main () {
	float a, b, aux1=0;
	cin>>a>>b;
	if(a<0 && b<0){
		cout<<"Q3"<<"\n";
	}
	if(a<0 && b>0){
		cout<<"Q2"<<"\n";
	}
	if(a>0 && b<0){
		cout<<"Q4"<<"\n";
	}
	if(a>0 && b>0){
		cout<<"Q1"<<"\n";
	}
	if(a==0 && b==0){
		cout<<"Origem"<<"\n";
	}
	if(a==0 && b>0 || a==0 && b<0){
		cout<<"Eixo Y"<<"\n";
	}
	if(a>0 && b==0 || a<0 && b==0){
		cout<<"Eixo X"<<"\n";
	}
}
