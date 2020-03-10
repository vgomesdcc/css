#include <iostream>
#include <math.h>
using namespace std;
int main () {
	int start, end, tempo;
	cin>>start>>end;
	if(start>end){
		tempo = (24-start)+end;
		cout<<"O JOGO DUROU "<<tempo<<" HORA(S)"<<"\n";
	}
	if(start<end){
		tempo = end - start;
		cout<<"O JOGO DUROU "<<tempo<<" HORA(S)"<<"\n";
	}
	if(start == end){
		cout<<"O JOGO DUROU 24 HORA(S)"<<"\n";
	}
}
