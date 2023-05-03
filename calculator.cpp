#include<iostream>

using namespace std;

int main()
{
	int x,y;
	int sum,sub,multi,modulo,div;

	cout << "Enter the first number\n";
	cin >> x;
	cout << "Enter the second number\n";
	cin >> y;
	
	sum=x+y;
	sub=x-y;
	multi=x*y;
	div=x/y;
	modulo=x%y;

	cout << "\n Sum = " <<sum;
	cout << "\n Sub = " <<sub;
	cout << "\n multi = " <<multi;
	cout << "\n div = " <<div;
	cout << "\n modulo = " <<modulo;

	return 0;
}
