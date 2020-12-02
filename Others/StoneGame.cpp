#include<iostream>
using namespace std;
int main(){
    int n, t;
    cin>>t;
    while(t--){
        cin>>n;
        int moves = (n/4) + (n%4);
        if(moves % 2 != 0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
