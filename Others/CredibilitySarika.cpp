#include<iostream>
using namespace std;

void selection_sort(int a[], int n)
{
    int i, j, min_index;
    for(i = 0; i < n-2; i++)
    {
        min_index = i;
        for(j = i+1; j < n; j++)
        {
            if(a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        swap(a[i], a[min_index]);
    }
}
int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];

    selection_sort(a, n);
    for(int i = 0, j = n-1; i < j; i++, j-- )
        swap(a[i],a[j]);

    int cred = 0;
    for(int x = 2; x <= (n - 2); x += 4)
        cred += a[x];
    cout<<cred;
    return 0;

}
