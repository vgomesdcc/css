#include <iostream>
using namespace std;
int main () {
	int a, b, c;
	cin>>a>>b>>c;
	if(a>b & a>c)
		cout<<a<<" eh o maior"<<"\n";
	if(b>a & b>c)
		cout<<b<<" eh o maior"<<"\n";
	if(c>a & c>b)
		cout<<c<<" eh o maior"<<"\n";

}
