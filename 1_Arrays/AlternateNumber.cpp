#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int s;
	    cin>>s;
	    int a[s], pi, ni;
	    for(int i = 0; i<s; i++){
	        cin>>a[i];
	        if(a[i] < 0)
	            ni = i;
	        else
	            pi = i;
	    }
	    int n2;
	    cout<<(ni)<<" "<<(pi)<<endl;
	    cin>>n2;
	    int p = 0, n = 0;
	    while(p != pi && n != ni){
	        while(a[p] < 0)
	            p++;
	        while(a[n] > 0)
	            n++;
	        cout<<a[p++]<<" "<<a[n++]<<" ";
	    }
	    while(p != pi)
	        cout<<a[p++]<<" ";
	    while(n != ni)
	        cout<<a[n++]<<" ";
	    cout<<endl;
	}
	return 0;
}
