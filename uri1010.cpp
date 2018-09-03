#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	int p1, p2, item1, item2;
	float preco1, preco2;
	cin>>p1>>item1>>preco1;
	cin>>p2>>item2>>preco2;
	float total;
	total = (item1*preco1)+(item2*preco2);
	cout<<fixed;
	cout.precision(2);
	cout<<"VALOR A PAGAR: R$ "<< total << "\n";
}
