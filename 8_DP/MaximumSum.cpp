#include <bits/stdc++.h>
#define size 100000
using namespace std;
int dp[size];

int maxSum(int n)
{
    if (dp[n] != -1)
        return dp[n];
    if (n <= 11)
        return dp[n] = n;
    return dp[n] = (maxSum(n / 2) + maxSum(n / 3) + maxSum(n / 4));
}
int main()
{
    int t;
    cin >> t;
    memset(dp, -1, sizeof(dp));
    while (t--)
    {
        int n;
        cin >> n;
        cout << maxSum(n) << endl;
    }
    return 0;
}