#include<iostream>

using namespace std;


int main()
{
	int a=20;
	int &b=a;
	cout << "a=" << a << endl << "b=" << b << endl;
	cout << "address of a=" << &a << endl << "address of b=" << &b << endl;
	return 0;

}
