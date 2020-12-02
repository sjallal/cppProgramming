#include <bits/stdc++.h>
using namespace std;

bool anagram(string s1, string s2){
    int n1 = s1.length();
    int n2 = s2.length();
    // cout<<n1<<" "<<n2<<endl;
    if(n1 != n2)
        return false;
    int freq1[26]={0}, freq2[26]={0};
    for(int i = 0; i < n1; i++){
        freq1[(int)s1[i]-'a']++;
        freq2[(int)s2[i]-'a']++;
    }
    for(int i = 0; i < n1; i++){
        // cout<<freq1[i]<<" "<<freq2[i]<<endl;
        if(freq1[i]!=freq2[i])
            return false;
    }
    return true;
}

int main(){
    int t; cin >> t;
    // cin.ignore();
    while(t--){
        string s1, s2;
        cin>>s1; cin>>s2;
        // cout<<s1<<","<<s2<<endl;
        if(anagram(s1, s2))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
// For map based solution visit 1Array/FrequencyOfCharacters.cpp