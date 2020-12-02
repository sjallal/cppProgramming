/*

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

void selectionSort(int a[], int n){
    for(int i = 0; i < n-1; i++){
        int minIndex = i;
        for(int j = i+1; j < n; j++){
            if(a[j] < a[minIndex])
                minIndex = j;
        }
        if(minIndex != i)
            swapp(a, i, minIndex);
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

    selectionSort(a, n);

    cout<<endl<<endl<<"After sorting"<<endl;
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}
