#include<iostream>

using namespace std;

void myadd(int &, int &);
void myadd(int &,int &,int &);

int main()
{
    int a=20;
    int b=40;

    myadd(a,b);
    cout << "Value myadd function (1)............." << endl;
    cout << "Value of 1A:" << a << endl;
    cout << "Value of 1B:" << b << endl;

    int c=69;
    myadd(a,b,c);
    cout << "Value myadd function (2)............." << endl;
    cout << "Value of 2A:" << a << endl;
    cout << "Value of 2B:" << b << endl;
    cout << "Value of 2C:" << c << endl;
    return 0;
}

void myadd(int &x, int &y)
{
    x+=100;
    y+=200;
}

void myadd(int &s, int &d,int &f)
{
    s+=100;
    d+=200;
    f++;
}