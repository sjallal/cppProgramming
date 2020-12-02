#include<iostream>
using namespace std;

class Complex
{
    int a, b;
public:
    friend istream& operator>>(istream&, Complex&);
    friend ostream& operator<<(ostream&, Complex);
};
istream& operator>>(istream &din, Complex &c)
{
    din>>c.a>>c.b;
    return(din);
}
ostream& operator<<(ostream &dout, Complex c)
{
    dout<<c.a<<" + i"<<c.b<<endl;
    return(dout);
}

int main(){
    Complex c;
    cin>>c; //operator >>(cin,c);
    cout<<c;//operator >>(cout,c);
    return 0;
}
