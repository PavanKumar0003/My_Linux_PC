#include<iostream>

using namespace std;

int main()
{
	int *a = new int;
	int *b = new int[2];
	b[0]=1;
	b[1]=2;
	*a = 20;
	cout<< "address of a:" << &a << endl << "value in a:" << *a << endl;
	cout<< "address of b:" << &b << endl << "value in b[1]:" << b[1] << endl;
	
	delete a;
	delete[] b;
	return 0;
}
