#include<iostream>
using namespace std;
int main(){
   int n, t;
   cin>>t;
   while(t-- != 0){
      cin>>n;
      if(n == 1){
        cout<<"You cannot generate christmas tree";
      }
      else if(n > 20)
        cout<<"Tree is no more";
      else{
         int flag = 1;
         int b = n;
         int fb = 1;
         int lb = n+1;
         while(b != 1){
            for(int i = fb; i <= lb; i++){
               for(int s = 1; s <= (n-i+1); s++)
                  cout<<" ";
               for(int j = (2*i-1); j > 0; j--){
                  cout<<"*";
               }
               cout<<endl;
            }
            lb--;
            if(flag == 1){
               fb++;
               flag = 0;
            }
            b = b - 1;
         }
         for(int i = 0; i < 2; i++){
           for(int j = 0; j < n; j++)
               cout<<" ";
           cout<<"*"<<endl;
         }
      }
   }
   return 0;
}
