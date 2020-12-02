#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string p; cin>>p;
        string s; cin>>s;
        cout<<p<<endl;
        cout<<s;
        int present[27];
        int l = s.length();
        for(int i = 0; i < l; l++){
            present[s[i]-'a']++;
        }
        l = p.length();
        string res = "";
        for(int i = 0; i < l; i++){
            if(present[p[i]]){
                while(present[p[i]]){
                    res.insert(res.length(),1,p[i]);
                    present[p[i]]--;
                }
            }
        }
        cout<<res<<endl;
    }
}

/*
1
qwryupcsfoghjkldezxvbintma
ativedoc

codevita
*/