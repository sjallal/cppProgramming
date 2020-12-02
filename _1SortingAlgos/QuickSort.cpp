/*

10
2 6 8 9 5 1 3 0 7 4

In-place sorting algorithm.
Average Case: O(n*log(n)).
Worst Case:   O(n2).

Explanation:
First we'll be selecting a pivot item and based on that
we will partition the whole list such that all the smaller
items than the pivot are on the left side of the pivot and
all the greater items than the pivot are on the right side
of the pivot.
Then we'll return the pivot index.

Based on that pivot index we'll again call quick sort for
both the sides individually.

In this way breaking the whole list into smaller chunks we can
sort the whole list.

*/

#include<bits/stdc++.h>
using namespace std;

void swapp(int a[], int i, int j){
    int temp =  a[i];
    a[i] = a[j];
    a[j] = temp;
}

int partitn(int a[], int start, int endd){
    int pivot = a[endd];
    int pIndex = start;
    for(int i = start; i < endd; i++){
        if(a[i] <= pivot){
            swapp(a, pIndex, i);
            pIndex++;
        }
    }
    swapp(a, pIndex, endd);
    return pIndex;
}

void quickSort(int a[], int start, int endd){
    if(start >= endd) return;
    int pIndex;
    pIndex = partitn(a, start, endd);
    quickSort(a, start, pIndex - 1);
    quickSort(a, pIndex + 1, endd);
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

    quickSort(a, 0, n-1);

    cout<<endl<<endl<<"After sorting"<<endl;
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}
