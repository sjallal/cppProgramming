#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    unordered_map<int,int> exist_a;
	    unordered_map<int,int> exist_b;
	    int n, m, counter = 0, x;
	    cin>>n>>m;
	    int a[n], b[m], l1=0, l2=0;
	    for(int i = 0; i < n; i++){
	            cin>>x;
	            if(exist_a[x] == 0){
	                exist_a[x]++;
	                a[l1++] = x;
                }
	    }
        for(int i = 0; i < m; i++){
	            cin>>x;
	            if(exist_b[x] == 0){
	                exist_b[x]++;
	                b[l2++] = x;
                }
        }

        for(int i = 0; i < l1; i++){
            if(exist_a[a[i]] == exist_b[a[i]])
                counter++;
        }
	    cout<<counter<<endl;
	}
	return 0;
}
