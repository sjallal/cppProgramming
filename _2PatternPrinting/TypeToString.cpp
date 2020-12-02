#include<iostream>
#include<string>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        string str = "";
        int i = 1;
        cin>>n;
        while(n--){
            str.append(to_string(i));
            str.append(" ");
            cout<<str<<endl;
            i++;
        }
    }
    return 0;
}
