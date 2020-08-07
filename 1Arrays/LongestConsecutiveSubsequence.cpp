#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], counter = 1, maxCount = 1;
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i = 1; i < n; i++){
            if((a[i] - a[i-1]) > 1){
                counter = 1;
            }
            else if((a[i] - a[i-1]) == 0)
                continue;
            else{
                counter++;
                if(counter > maxCount){
                    maxCount = counter;
                }
            }
        }
        cout<<maxCount<<endl;
    }
    return 0;
}
