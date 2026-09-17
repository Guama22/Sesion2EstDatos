#include <iostream>
using namespace std;

void sube(int* n)
{
	(*n)++;
}
void mas(int& n)
{
	n++;
}

int main(int argc, char **argv)
{
	int a;
	cout << "Escribe un dato entero: "<<"\n";
	cin >> a;
	for(int i=0;i<10;i++) {
		cout <<i<<": "<<a<<"\n";
		sube(&a);
	}
	cout <<"\n";
	for(int i=0;i<10;i++) {
		cout <<i<<": "<<a<<"\n";
		mas(a);
	}
	return 0;
}
