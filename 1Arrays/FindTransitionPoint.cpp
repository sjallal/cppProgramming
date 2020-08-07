/*
You are given a sorted array containing only numbers 0 and 1.
Find the transition point efficiently. Transition point is a
point where "0" ends and "1" begins.
Note that, if there is no "1" exists, print -1.
*/
//Input
//1
//5
//0 0 0 1 1
//
//Output
//3

#include<iostream>

using namespace std;

int transitionPoint(int a[], int n) {
    int l = 0, h = n-1;
    int mid = (l+h) / 2;
    if(a[0] == 1)
        return 0;
    if(a[n-1] == 0)
        return -1;
    if(a[n-2] == 0 && a[n-1] == 1)
        return(n-1);
//    while(!(a[mid] == 1 && a[mid - 1] == 0) && !(a[mid] == 0 && a[mid + 1] == 1))
//    {
//        if(a[mid]==1 && a[mid-1]==1)
//            mid = mid / 2;
//        if(a[mid]==0 && a[mid+1]==0)
//            mid = (mid+n-1) / 2;
//    }
//    if(a[mid] == 1 && a[mid-1] == 0){
//        return mid;
//    }
//    else{
//        return (mid+1);
//    }
    while(1){
        if(a[mid] == 0)
            if(a[mid+1] == 1)
                return mid+1;
            else{
                l = mid;
                mid = (l+h)/2;
            }
        else if(a[mid-1] == 0)
            return mid;
        else{
            h = mid;
            mid = (l+h)/2;
        }
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *a = new int[n];
        for(int i = 0; i<n; i++)
            cin>>a[i];
        cout<< transitionPoint(a,n)<<endl;
    }
    return 0;
}
