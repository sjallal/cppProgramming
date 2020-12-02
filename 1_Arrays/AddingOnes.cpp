#include <iostream>
#include<vector>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n, k;
	    scanf("%d %d",&n,&k);
	    vector<int> a(n,0);
	    int x;
	    for(int i = 0; i < k; i++){
	       scanf("%d",&x);
	       for(int j = x-1; j < n; j++)
	            a[j]++;
	    }
	    for(int i = 0; i < n; i++){
	        printf("%d ",a[i]);
	    }
	    printf("\n");
	}
	return 0;
}
