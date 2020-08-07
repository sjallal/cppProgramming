//#include<iostream>
//#include<cmath>
//#include<stdio.h>
//using namespace std;
//int main(){
//    int n, a, b, c, f;
//    float d;
//    scanf("%d",&n);
//    int *array = new int[n];
//
//    for(int i = 0; i < n; i++)
//    {
//        scanf("%d %d", &a, &b);
//        if(a < b)
//            array[i] = b - a;
//        else{
//            d = a / float(b);
//        f = floor(d);
//        c = ceil(d);
//        if( (a-(b*f)) < ((b*c)-a) )
//            array[i] = abs((a-(b*f)));
//        else
//            array[i] = abs(((b*c)-a));
//        }
//    }
//
//    for(int i = 0; i < n; i++)
//        printf("%d\n", array[i]);
//
//    delete [] array;
//
//    return 0;
//}

#include<iostream>
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b==0) cout<<0<<endl;
        else cout<<(b-(a%b))<<endl;
    }
    return 0;
}
