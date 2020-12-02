/**

10
2 6 8 9 5 1 3 0 7 4

*/

#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n){
    for(int i = 1; i < n; i++){
        int pickedItem = a[i];
        int j = i - 1;
        while(j >= 0 && pickedItem < a[j]){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = pickedItem;
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

    insertionSort(a, n);

    cout<<endl<<endl<<"After sorting"<<endl;
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}
