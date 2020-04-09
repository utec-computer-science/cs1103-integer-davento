#include "integer.h"
#include <iostream>
using namespace std;

int main ()
{
	integer a;
	integer b(4);
	integer c(3);
	integer d = c;
	cout<<d + b<<"\n";	
	cout<<(int)c + 2<<"\n";
	cin>>a;
	cout<<a<<"\n";
}