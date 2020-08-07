/*

Tahir and Mamta are working in a project in TCS. Tahir being a problem solver came up with an interesting problem
for his friend Mamta.

Problem consists of a string of length N and contains only small case alphabets.

It will be followed by Q queries, in which each query will contain an integer P (1<)

9
abacsddaa
2
9
3

9
abacsddaa
1
9
3


*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string s; cin>>s;
    int q; cin>>q;
    vector <int> v;
    for(int i = 0; i < q; i++){
        int pos; cin>>pos;
        int count = 0;
        for(int j = 0; j < pos-1; j++){
            if(s[pos-1] == s[j])
                count++;
        }
        v.push_back(count);
    }
    v.shrink_to_fit();
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
    return 0;
}