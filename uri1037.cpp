#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main () {
	float A;
	cin>>A;
	if(A < 0.0000)
         cout << "Fora de intervalo\n";
    else if(A >= 0.0000 && A <= 25.0000)
         cout << "Intervalo [0,25]\n";
    else if(A > 25.0000 && A <=50.0000)
         cout << "Intervalo (25,50]\n";
    else if(A > 50.0000 && A <=75.0000)
         cout << "Intervalo (50,75]\n";
    else if(A > 75.0000 && A <=100.0000)
         cout << "Intervalo (75,100]\n";
    else if(A > 100.0000)
		cout << "Fora de intervalo\n";
}
