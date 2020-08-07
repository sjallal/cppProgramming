#include <bits/stdc++.h>
using namespace std;

int revArray(int arr[], int n)
{
    int i = 0, j = n - 1, t;
    while (i < j)
    {
        t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
        i++;
        j--;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    // cout << t << endl;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // cout << a[i] << endl;
        }
        revArray(a, n);
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}