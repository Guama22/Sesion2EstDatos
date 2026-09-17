#include <iostream>
using namespace std;

void ejemplo(int a, int& b);

int main(int argc, char **argv)
{
	int x=2, y=4;
	cout << "1. x= "<< x <<" y= "<< y << "\n";
	ejemplo(a,&b);
	cout << "2. x= "<< x <<" y= "<< y << "\n";
	return 0;
}

void ejemplo(int a, int& b)
{
	a=5;
	b=8;
}