#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    int t, n, m, counter;
    cin>>t;
    while(t--){
        counter = 0;
        unordered_map<int,int> exist;
        cin>>n>>m;
        int a[m+n];
        for(int i = 0; i < m+n; i++){
            cin>>a[i];
            if(exist[a[i]] == 0)
            {
                exist[a[i]]++;
                counter++;
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
