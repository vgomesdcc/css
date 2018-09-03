#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main () {
	int tempo;
	cin>>tempo;
	int time = tempo/((90 / 60.0) - (60 / 60.0));
	cout<<time<<" minutos"<<"\n";
}
