#include<bits/stdc++.h>
using namespace std;

int smallestPosMissing(int a[], int n){
    for(int i = 0; i < n;){
        for(int i = 0; i < n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        if(a[i] == i+1){
            i++;
        }
        else if(a[i] <= 0 || a[i] > n){
            i++;
        }
        else{
            int temp = a[i];
            // cout<<i<<" "<<temp<<endl;
            a[i] = a[a[i]-1];
            a[temp-1] = temp;
            // cout<<"hi"<<endl;
        }
    }
    for(int i = 0; i < n; i++){
        if(i+1 != a[i]){
            return i+1;
        }
    }
    return (n+1);
}

int main(){
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        cout<<smallestPosMissing(a, n)<<endl;
    }
    return 0;
}

// 0,-10,1,3,-20