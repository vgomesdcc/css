#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	float renda, x=0;
	cin>>renda;
	if(renda<=2000.0){
		cout<<"Isento\n";
	}
	else if(renda<=3000.0){
		x=(renda-2000.0)*0.08;
		cout<<fixed;
		cout.precision(2);
		cout<<"R$ "<<x<<"\n";
	}
		else if(renda<=4500.0){
		x=(renda-3000.0)*0.18+(1000*0.08);
		cout<<fixed;
		cout.precision(2);
		cout<<"R$ "<<x<<"\n";
	}
		else {
		x=(renda-4500.0)*0.28+(1500*0.18)+(1000*0.08);
		cout<<fixed;
		cout.precision(2);
		cout<<"R$ "<<x<<"\n";
	}
	
}
