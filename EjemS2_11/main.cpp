#include <iostream>
using namespace std;

int cuadrado(int x)
{
	return x*x;
}
void cuadrado(char c)
{
	cout <<c<<c<<"\n";
	cout <<c<<c<<"\n";
}

int main(int argc, char **argv)
{
	cout << "Usamos la funcion para elevar al cuadrado"<<"\n";
	cout << cuadrado(12)<<"\n";
	machaca1(a, &b);
	cout << "Ahora la usamos para pintar un caracter formando un cuadrado"<<"\n";
	cuadrado("*");
	return 0;
}
