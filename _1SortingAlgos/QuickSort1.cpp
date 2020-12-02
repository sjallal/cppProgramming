/**

5
2 6 8 9 5

*/


#include<iostream>
#include<vector>
#include<limits>

using namespace std;

vector<int> a;

int partitn(int l, int h){
    int i = l;
    int j = h;
    int pivot = a[l];
    while(i < j){
        do{
            i++;
        }while(a[i] <= pivot);
        do{
            j--;
        }while(a[j] > pivot);
        if(i < j){
            swap(a[i], a[j]);
        }
    }
    swap(a[l], a[j]);
    return j;
}

void QuickSort(int l, int h){
    if(l < h){
        int j = partitn(l, h);
        QuickSort(l, j);
        QuickSort(j+1, h);
    }
}

int main(){
    int n;
    cin>>n;//Number of elements.

    int x;
    while(n--){
        cin>>x;
        a.push_back(x);
    }

    a.push_back(numeric_limits<int>::max()); //Assigning infinity to the last element;

    vector<int>:: iterator p;

    for(p = a.begin(); p < a.end(); p++){
        cout<<*p<<" ";
    }

    QuickSort(0, a.size()-1);

    a.pop_back();
    cout<<endl<<"After QUICK SORT:-"<<endl;
    for(p = a.begin(); p < a.end(); p++){
        cout<<*p<<" ";
    }

    return 0;
}

