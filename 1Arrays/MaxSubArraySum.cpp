/*
    Kadane's Algorithm!!!
*/

/*
Output:
Print the maximum sum of the contiguous sub-array in a
separate line for each test case.

Constraints:
1 ≤ T ≤ 110
1 ≤ N ≤ 106
-107 ≤ A[i] <= 107

Example:
Input
2
5
1 2 3 -2 5
4
-1 -2 -3 -4
Output
9
-1

Explanation:
Testcase 1: Max subarray sum is 9 of elements
(1, 2, 3, -2, 5) which is a contiguous subarray.
*/



#include <iostream>
#include<limits>
using namespace std;

void maxSum(int *a, int n){
    int gsum=a[0], maxsum = a[0];
    for(int i = 1; i < n; i++){
        gsum += a[i];
        if(gsum > a[i])
            a[i] = gsum;
        else
            gsum = a[i];
        if(gsum > maxsum)
            maxsum = gsum;
    }
    cout<<maxsum<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i = 0; i < n; i++){
            cin>>a[i];
	    }
	    maxSum(a, n);
	}
	return 0;
}
