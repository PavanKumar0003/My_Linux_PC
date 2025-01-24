#include<iostream>

using namespace std;

void myadd(int &, int &);

int main()
{
    int a=20;
    int b=40;
    
    cout << "Value before function call" << endl;
    cout << "Value of A:" << a << endl;
    cout << "Value of B:" << b << endl;
    myadd(a,b);
    cout << "Value after function call" << endl;
    cout << "Value of A:" << a << endl;
    cout << "Value of B:" << b << endl;
    return 0;
}

void myadd(int &x, int &y)
{
    x+=100;
    y+=200;
}