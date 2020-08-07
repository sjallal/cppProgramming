/*
Example:
Input:
2
aaaabbaa
abcd
Output:
aabbaa
a
*/



#include<bits/stdc++.h>
using namespace std;

bool isPal(string A){
    int i = 0, j = A.length()-1;
    while(i < j){
        // cout<<"indside while"<<endl;
        if(A[i] != A[j])
            return false;
        i++;
        j--;
    }
    return true;
}

string longestPalindrome(string A) {
    // cout<<"indside LP"<<endl;
    if(A.length() == 1){
        return A;
    }
    if(isPal(A)){
        return A;
    }
    if(longestPalindrome(A.substr(0, A.length()-1)).length() >= longestPalindrome(A.substr(1, A.length())).length()){
        return longestPalindrome(A.substr(0, A.length()-1));
    }
    else{
        return longestPalindrome(A.substr(1, A.length()));
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<longestPalindrome(s)<<endl;
    }
    return 0;
}