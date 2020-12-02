#include<bits/c++.h>
#define ll long long

bool prime(ll n){
    ll sqr =
}

using namespace std;
int main(){
    ll n; cin>>n;
    ll sum = 0;
    for(int i = 2; i <= n; i++)
        if(prime(i)){
            sum += i;
        }
    cout<<sum;
    return 0;
}
