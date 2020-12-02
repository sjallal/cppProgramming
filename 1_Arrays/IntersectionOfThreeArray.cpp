#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
//    int t;
//    cin>>t;
//    while(t--){
//        int n1, n2, n3, x, l1=1, l2=1, l3=1, flag=1;
//        cin>>n1>>n2>>n3;
//        int a[n1], b[n2], c[n3];
//        unordered_map<int, int> m;
//        cin>>a[0];
//        for(int i = 1; i < n1; i++){
//            cin>>x;
//            if(x != a[l1-1]){
//                a[l1++] = x;
//                m[x]++;
//            }
//        }
//        cin>>b[0];
//        for(int i = 1; i < n2; i++){
//            cin>>x;
//            if(x != b[l2-1]){
//                b[l2++] = x;
//                if(m[x] == 1){
//                    m[x]++;
//                }
//            }
//        }
//        cin>>c[0];
//        for(int i = 1; i< n3; i++){
//            cin>>x;
//            if(x != c[l3-1]){
//                c[l3++] = x;
//                if(m[x] == 2){
//                    cout<<x<<" ";
//                    flag = 0;
//                }
//            }
//        }
//        if(flag){
//            cout<<"-1";
//        }
//        cout<<endl;
//    }

    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3,l1=1,l2=1,l3=1,x,flag=1;
        cin>>n1>>n2>>n3;
        int a[n1], b[n2], c[n3];
        cin>>a[0];
        for(int i = 1; i < n1; i++){
            cin>>x;
            if(x != a[l1-1]){
                a[l1++] = x;
            }
        }
        cin>>b[0];
        for(int i = 1; i < n2; i++){
            cin>>x;
            if(x != b[l2-1]){
                b[l2++] = x;
            }
        }
        cin>>c[0];
        for(int i = 1; i < n3; i++){
            cin>>x;
            if(x != c[l3-1]){
                c[l3++] = x;
            }
        }
        int i = 0, j = 0, k = 0;

        while(i < l1 && j < l2 && k < l3){
            if((a[i] == b[j]) && (a[i] == c[k])){
                cout<<a[i]<<" ";
                flag = 0;
                i++;
                j++;
                k++;
            }
            else if(a[i] < b[j])
                i++;
            else if(b[j] < c[k]){
                j++;
            }
            else{
                k++;
            }
        }
        if(flag){
            cout<<"-1";
        }
        cout<<endl;
    }

    return 0;


}

//I/p:-
//1
//6 5 8
//1 5 10 20 40 80
//6 7 20 80 100
//3 4 15 20 30 70 80 120
//O/p:-
//20 80
