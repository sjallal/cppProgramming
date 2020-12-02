#include<iostream>
using namespace std;

class Complex
{
    int a, b;
public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout<<a<<" "<<b<<endl;
    }
    friend Complex operator+(Complex, Complex);
};
Complex operator+(Complex X, Complex Y)
{
    Complex temp;
    temp.a = X.a + Y.a;
    temp.b = X.b + Y.b;
    return temp;
}

int main(){
    Complex c1, c2, c3;
    c1.setData(3, 4);
    c2.setData(5, 6);
    c3 = c1 + c2;
    c3.showData();
    return 0;
}
