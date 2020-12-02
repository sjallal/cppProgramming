/*

10
2 6 8 9 5 1 3 0 7 4

*/

#include<bits/stdc++.h>
using namespace std;

void Merge(int left[], int nL, int right[], int nR, int a[]){
  int i=0, j=0, k=0;
  while(i < nL && j < nR){
    if(left[i] <= right[j]){
      a[k] = left[i];
      i++;
    }
    else{
      a[k] = right[j];
      j++;
    }
    k++;
  }
  while(i < nL){
    a[k] = left[i];
    k++; i++;
  }
  while(j < nR){
    a[k] = right[j];
    k++; j++;
  }
}

void mergeSort(int a[], int n){
  if(n == 1) return;
  int mid = n / 2;
  int left[mid], right[n-mid];
  for(int i = 0; i < mid; i++){
    left[i] = a[i];
  }
  for(int i = 0, j = mid; i < n-mid; i++, j++){
    right[i] = a[j];
  }
  mergeSort(left, mid);
  mergeSort(right, n-mid);
  Merge(left, mid, right, n-mid, a);
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

    mergeSort(a, n);

    cout<<endl<<endl<<"After sorting"<<endl;
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
