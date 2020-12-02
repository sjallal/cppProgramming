/**

10
2 6 8 9 5 1 3 0 7 4

*/

#include<bits/stdc++.h>
using namespace std;

void heapSort(int a[], int start, int endd){

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

    heapSort(a, 0, n);

    cout<<endl<<endl<<"After sorting"<<endl;
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}
