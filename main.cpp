#include "integer.h"

int main ()
{
	Integer a;
	Integer b(4);
	Integer c(3);
	Integer d = c;
	cout<<d + b<<"\n";	
	cout<<(int)c + 2<<"\n";
	cin>>a;
	cout<<a<<"\n";
}