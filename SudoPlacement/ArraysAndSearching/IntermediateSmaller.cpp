// Find Immediate Smaller Than X
// Given an array arr[] of size N containing positive integers and
// an integer X. You need to find the value in the array which is smaller
// than X and closest to it.
/*
Sample Input:
2
5
4 67 13 12 15
16
5
1 2 3 4 5
1

Sample Output:
15
-1
*/

#include <bits/stdc++.h>
using namespace std;

int immediateSmaller(int arr[], int n, int x)
{
    int minDif, dif, res = -1;
    minDif = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        dif = x - arr[i];
        if (dif > 0 && dif < minDif)
        {
            res = arr[i];
            minDif = dif;
        }
    }
    if (res != -1)
        return res;
    return -1;
}

int main()
{
    int n, x;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> x;
    cout << immediateSmaller(a, n, x) << endl;
    return 0;
}
