#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, index, flag = 1;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        for(int i = 0; i < n; i++){
            index = a[i] % n;
            a[index] += n;
        }
        for(int i = 0; i < n; i++){
            if(a[i] / n >= 2)
            {
                cout<<i<<" ";
                flag = 0;
            }
        }
        if(flag)
            cout<<"-1";
        cout<<endl;
    }

    return 0;
}
