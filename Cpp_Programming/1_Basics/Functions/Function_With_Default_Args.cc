#include<iostream>

using namespace std;

int add(int ,int ,int=0, int=0, int=0);

int main()
{
	int a=20,b=30,c=40;
	cout <<"add value=" << add(a,b) << endl;
	return 0;
}

int add(int a, int b,int,int,int)
{
	return a+b;
}

