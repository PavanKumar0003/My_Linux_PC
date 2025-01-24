#include<iostream>

using namespace std;

int main()
{
    int a=100;
    int &b=a;
    cout << "Value of A:" << a << endl;
    cout << "Value of B:" << b << endl;
    return 0;
}