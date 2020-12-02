#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string flag;
        cin>>flag;

        string str1 = "W";
        string str2 = "B";

        int l = ceil((double)n/2);

        for(int i = 1; i < l; i++){
            str1.append(str2);
            if(i % 2 != 0)
            str2 = "W";
            else
            str2 = "B";
        }
        if(l % 2 == 0)
            str1.append(str1.substr(0,(n-str1.length())));
        else{
            str1.append("B");
            str1.append(str1.substr(0,(n-str1.length())));
        }

        str2 = "";
        str2.append("B");
        str2.append(str1.substr(0,(str1.length() - 1)));


        for(int i = 1; i <= n; i++){
            if(flag == "W")
            {
                if(i % 2 == 0){
                    cout<<str2<<endl;
                }
                else{
                    cout<<str1<<endl;
                }
            }
            else{
                if(i % 2 != 0){
                    cout<<str2<<endl;
                }
                else{
                    cout<<str1<<endl;
                }
            }
        }
    }


    return 0;
}

