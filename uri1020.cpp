#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main () {
	int t;
	cin>>t;
	int h = t/365;
	t = t -(h*365);
	int m = t/30;
	t = t-(m*30);
	cout<<h<<" ano(s)"<<"\n";
	cout<<m<<" mes(es)"<<"\n";
	cout<<t<<" dia(s)"<<"\n";
}