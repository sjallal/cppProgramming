#include<iostream>
#include<cmath>
using namespace std;
int main(){
   int t,n;
   cin>>t;
   while(t--){
      cin>>n;
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
      if(l % 2 == 0){
         str1.append(str1.substr(0,(n-str1.length())));
//         cout<<str1<<str1.substr(0,(n-str1.length()))<<endl;
      }
      else{
         str1.append("B");
         str1.append(str1.substr(0,(n-str1.length())));
//         cout<<str1<<"B"<<str1.substr(0,(n-str1.length()-1))<<endl;
      }
//      cout<<str1<<endl;
      str2 = "";
      str2.append("B");
      str2.append(str1.substr(0,(str1.length() - 1)));
//      cout<<str2<<endl;

      for(int i = 1; i <= n; i++){
         if(i % 2 == 0){
            cout<<str2<<endl;
         }
         else{
            cout<<str1<<endl;
         }
      }
   }


   return 0;
}
