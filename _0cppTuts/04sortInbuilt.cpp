#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t, k, x, n;
	cin >> t; // Number of test cases.
	while (t--)
	{
		vector<int> a;
		cin >> n; // Taking the size of the array.
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &x);
			a.push_back(x);
		}
		cin >> k; // To output the kth element.
		a.shrink_to_fit();

		sort(a.begin(), a.end()); // The inbuilt sort function.

		cout << a[k - 1] << endl;
	}
	return 0;
}
