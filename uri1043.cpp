#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float A, B, C, d, e, f, x=0, a;
    cin>>A>>B>>C;
    d= B-C;
    cout<<fixed;
    cout.precision(1);
    if(d<0){
    	d= d*(-1);
	}
	e= A-C;
	if(e<0){
    	e= e*(-1);
    }
    f= A-B;
    if(f<0){
    	f= f*(-1);
    }
    if(d<A & A<B+C){
    	if(e<B & B<A+C){
    		if(f<C & C<A+B){
    			x= A+B+C;
    			cout<<"Perimetro = "<<x<<"\n";
			}
		}
	}
	else{
		a=((A+B)/2)*C;
		cout<<"Area = "<<a<<"\n";
	}
		
}
