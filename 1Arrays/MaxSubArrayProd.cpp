#include <iostream>

using namespace std;

#define ll long long

ll int maxq(ll int a,ll int b){
    if(a>=b)
        return(a);
    else
        return(b);
}
ll int minq(ll int a,ll int b){
    if(a<=b)
        return(a);
    else
        return(b);
}

void maxProd(int *a, int n){
    ll int maxprod = a[0], curMaxProd = a[0], curMinProd = a[0], prevMaxProd = a[0], prevMinProd = a[0];
    for(int i = 1; i < n; i++){
        curMaxProd = maxq(a[i], maxq((prevMinProd*a[i]), (prevMaxProd*a[i])) );
        curMinProd = minq((prevMaxProd*a[i]), minq((prevMinProd*a[i]), a[i]) );
        maxprod = maxq(maxprod, maxq(curMaxProd, curMinProd) );
        prevMaxProd = curMaxProd;
        prevMinProd = curMinProd;
    }
    cout<<maxprod<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i<n ; i++){
            cin>>a[i];
        }
        maxProd(a, n);
    }
	return 0;
}
