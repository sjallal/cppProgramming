/**

10
2 6 8 9 5 1 3 0 7 4

*/

#include<bits/stdc++.h>
using namespace std;

void swapp(int a[], int i, int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void bubbleSort(int a[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 1; j < n-i; j++){
            if(a[j-1] > a[j]){
                swapp(a, j, j-1);
            }
        }
    }
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    cout<<endl<<"Before sorting"<<endl;
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }

    bubbleSort(a, n);

    cout<<endl<<endl<<"After sorting"<<endl;
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}
