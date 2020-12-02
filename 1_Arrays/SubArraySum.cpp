#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, tar, s = 0, flag = 1, sum = 0;
	    cin>>n>>tar;
	    int a[n];
	    for(int i = 0; i < n; i++)
	        cin>>a[i];
	    for(int i = 0; i < n; i++){
	        sum += a[i];
	        if(sum > tar){
	            while(sum > tar && s <= i){
	                sum -= a[s];
	                s++;
	            }
	        }
	        if(sum == tar){
	            cout<<s+1<<" "<<i+1<<endl;
	            flag = 0;
	            break;
	        }
	    }
	    if(flag)
	        cout<<"-1"<<endl;
	}
	return 0;
}
