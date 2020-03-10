#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){

	int h1,m1,h2,m2;
	cin>>h1>>m1;
	cin>>h2>>m2;

	int inicio = h1*60 + m1;
	int final = h2*60 + m2;
	int duracao=0;

		if(h1==h2 && m1==m2){
		cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
		}

		else if(h1<h2 && m1<m2){
			cout<<"O JOGO DUROU "<<(h2-h1)<< " HORA(S) E "<<(m2-m1)<<" MINUTO(S)\n";
		}

		else if(h1<h2 && m2<m1){
			cout<<"O JOGO DUROU "<<(h2-h1)-1<< " HORA(S) E "<<((m2+60)-m1)<<" MINUTO(S)\n";
		}

		else if(h1==h2 && m1<m2){
		cout<<"O JOGO DUROU 0 HORA(S) E " <<m2-m1<< " MINUTO(S)\n";
		}

		else if(h1==h2 && m1>m2){
		cout<<"O JOGO DUROU 23 HORA(S) E "<<((m2+60)-m1)<<" MINUTO(S)\n";
		}

		else if(h1<h2 && m1==m2){
			cout<<"O JOGO DUROU "<<h2-h1<<" HORA(S) E 0 MINUTO(S)\n";
		}

		else if(h1>h2 && m1>m2){
			cout<<"O JOGO DUROU "<<(h2+23)-h1<<" HORA(S) E "<<(m2+60)-m1<<" MINUTO(S)\n";
		}

		else if(h1>h2 && m1<m2){
			cout<<"O JOGO DUROU "<<(h2+24)-h1<<" HORA(S) E "<<m2-m1<<" MINUTO(S)\n";
		}

		else if(h1>h2 && m1==m2){
			cout<<"O JOGO DUROU "<<(h2+24)-h1<<" HORA(S) E 0 MINUTO(S)\n";
		}
	}
