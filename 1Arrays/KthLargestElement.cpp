#include <iostream>
#include<limits>
using namespace std;

int *a, n, k;

int partitn(int l, int h){
    int pivot = a[l];
    int i = l, j = h;
    while(i < j){
        do{
            i++;
        }while(a[i] <= pivot);
        do{
            j--;
        }while(a[j] > pivot);
        if(i < j)
            swap(a[i], a[j]);
    }
    swap(a[l],a[j]);
    return j;
}

void QuickSort(int l, int h){
    if(l < h){
        int j = partitn(l, h);
        if(j == (n-k)){
            cout<<a[j]<<endl;
            return;
        }
        if(j > (n-k)){
            QuickSort(l, j);
        }
        else{
            QuickSort(j+1, h);
        }
    }
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    cin>>n;
	    a = new int[n+1], k;
	    for(int i = 0; i < n; i++){
	        cin>>a[i];
	    }
	    cin>>k;

	    a[n] = numeric_limits<int>::max();

	    QuickSort(0, n);
	}
	return 0;
}
