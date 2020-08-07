//Input
//
//3
//1 27
//5 19 2893 3497 9 876
//8 19 2893 890 3497 -293 9 876 -98
//Output
//
//27
//19 2893 3497 9 876
//19 2893 890 3497 -293 9 876 -98

#include <iostream>
using namespace std;
int main()
{
	int n, t;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		int a[t];
		for (int j = 0; j < t; j++)
		{
			cin >> a[j];
			cout << a[j] << " ";
		}
		cout << endl;
	}
	return 0;
}

//+++++++++++++++++++++++++++=========++++++++++++++++++++++++++++++++//

//Input
//3
//1 hello
//5 hello welcome to the codevita
//8 there is nothing better than coding agreed ?
//
//Output
//hello
//hello welcome to the codevita
//there is nothing better than coding agreed ?

// #include<iostream>
// #include<string.h>
// using namespace std;
// int main()
// {
//    int n,t;
// 	cin>>n;
// 	for(int i = 0; i < n; i++){
// 		cin>>t;
// 		string a[t];
// 		for(int j = 0; j < t; j++){
// 			cin>>a[j];
// 			cout<<a[j]<<" ";
// 		}
// 		cout<<endl;
// 	}
//    return 0;
// }
