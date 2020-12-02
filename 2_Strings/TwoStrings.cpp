/*

2
SaqibJallal
Saqib
YES

Saqib
ZZZ
NO

*/


#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {

    int l1 = s1.size();
    int l2 = s2.size();

    unordered_map<char, int> exists1;
    unordered_map<char, int> exists2;
    int index = 0;
    for(int i = 0; i < l1; i++){
        if(exists1[s1[i]] == 0){
            s1[index++] = s1[i];
            exists1[s1[i]]++;
        }
    }
    index = 0;
    for(int i = 0; i < l2; i++){
        if(exists2[s2[i]] == 0){
            s2[index++] = s2[i];
            exists2[s2[i]]++;
        }
    }

    l1 = s1.size();
    l2 = s2.size();

    if(l1 < l2){
        for(int i = 0; i < l1; i++){
            if(exists1[s1[i]] == exists2[s1[i]]){
                return "YES";
            }
        }
        return "NO";
    }
    else{
        for(int i = 0; i < l2; i++){
            if(exists1[s2[i]] == exists2[s2[i]]){
                return "YES";
            }
        }
        return "NO";
    }
}

int main()
{
    string s1, s2, result;
    int t;
    cin>>t;
    while(t--){
        cin>>s1;
        cin>>s2;
        result = twoStrings(s1, s2);
        cout<<result<<endl;
    }
    return 0;
}

