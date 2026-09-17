#include <iostream>
using namespace std;

void machaca1(int x,int* y)
{
	*y=x;
}
void machaca2(int x,int& y)
{
	y=x;
}

int main(int argc, char **argv)
{
	int a, b;
	cout << "Escribe dos datos enteros: "<<"\n";
	cin >> a >> b;
	cout << "Antes de machaca1: "<<a<<" y "<<b<<"\n";
	machaca1(a, &b);
	cout << "Despues de machaca1: "<<a<<" y "<<b<<"\n"<<"\n";
	b=copia;
	cout << "Antes de machaca2: "<<a<<" y "<<b<<"\n";
	machaca2(a, b);
	cout << "Despues de machaca2: "<<a<<" y "<<b<<"\n"<<"\n";
	return 0;
}
