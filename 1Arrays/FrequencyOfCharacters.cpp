#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        unordered_map<int, int> mp;
        int n;cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        // Traverse through array elements and count frequencies 
        for (int i = 0; i < n; i++) 
            mp[arr[i]]++; 
        // Traverse through map and print frequencies 
        for (auto x : mp) 
            cout << x.first << " " << x.second << endl; 
        /*To print elements according to first occurrence, 
        traverse array one more time print frequencies of elements and 
        mark frequencies as -1 so that same element is not printed multiple times. */
        for (int i = 0; i < n; i++) { 
            if (mp[arr[i]] != -1) { 
                cout << arr[i] << " " << mp[arr[i]] << endl; 
                mp[arr[i]] = -1; 
            } 
        }
    }
    return 0;
}

/*
2
6
1 2 3 4 5 6
6 1
5 1
4 1
3 1
2 1
1 1
5
5 4 3 2 1
1 1
2 1
3 1
4 1
5 1
*/