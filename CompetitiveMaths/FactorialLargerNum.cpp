//#include <iostream>
//using namespace std;
//
//#define MAX 500
//int multiply(int *, int, int);
//
//void fact(int n){
//    int a[MAX], res_size = 1;
//    a[0] = 1;
//    for(int i = 2; i <= n; i++){
//        res_size = multiply(a, i, res_size);
////        cout<<"rs = "<<res_size<<" ";
//        cout<<endl;
//    }
//    cout<<endl<<endl;
//    for(int i = res_size-1; i >= 0; i--){
//        cout<<a[i];
//    }
//    printf("\n");
//}
//
//int multiply(int *a, int x, int res_size){
//    int carry = 0, y;
//    for(int i = 0; i < res_size; i++){
//        cout<<"1st = "<<a[i]<<endl;
//        y = (a[i] * x) + carry;
//        cout<<"y = "<<y<<endl;
//        a[i] = y % 10;
//        carry = y / 10;
//        cout<<a[i]<<" ";
//    }
//    cout<<endl<<"c = "<<carry<<endl;
//    while(carry){
//        res_size++;
//        a[res_size-1] = carry % 10;
//        carry = carry / 10;
//    }
//    cout<<"rs = "<<res_size<<" "<<endl;
//
//    return res_size;
//}
//
//int main() {
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        fact(n);
//    }
//	return 0;
//}


#include <iostream>
using namespace std;

#define MAX 10000
int multiply(int *, int, int);

void fact(int n){
    int a[MAX], res_size = 1;
    a[0] = 1;
    for(int i = 2; i <= n; i++){
        res_size = multiply(a, i, res_size);
    }
    for(int i = res_size-1; i >= 0; i--){
        cout<<a[i];
    }
    printf("\n");
}

int multiply(int *a, int x, int res_size){
    int carry = 0, y;
    for(int i = 0; i < res_size; i++){
        y = (a[i] * x) + carry;
        a[i] = y % 10;
        carry = y / 10;
    }
    while(carry){
        res_size++;
        a[res_size-1] = carry % 10;
        carry = carry / 10;
    }
    return res_size;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        fact(n);
    }
	return 0;
}




