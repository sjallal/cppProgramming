#include<iostream>
using namespace std;
int main(){
    float p;
    float l;
    cin>>p;
    cin>>l;
    if(l == 360 || l == 0){
        printf("0.00\n");
        return 0;
    }
    float t = (p / 360) * l;
    float m = (int(t*10) % 10) * 6;
    float a = (t*5*6) - (m*6);
    if(a < 0){
        a = -a;
    }
    printf("%0.2f",a);
    return 0;

}
