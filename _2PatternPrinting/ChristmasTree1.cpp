#include<iostream>
using namespace std;
int main(){
   int n, t;
   cin>>t;
   while(t-- != 0){
      string str = "", spaces = "", last = "";
      cin>>n;

      if(n <= 1){
        cout<<"You cannot generate christmas tree"<<endl;
      }
      else if(n > 20)
        cout<<"Tree is no more"<<endl;
      else{
         int c = 0;
         for(int i = 1; i <= n; i++)
            spaces.append(" ");
         last.append(spaces);
         last.append("*\n");
         last.append(last);
         for(int i = 1; i<= n+1; i++){
            str.append(spaces);
            c = c + (spaces.length());
            for(int j = 1; j <= (2*i-1); j++){
               str.append("*");
               c++;
            }
            str.append("\n");
            c++;

            spaces.erase(0, 1);
         }
         cout<<str;

         int d = 2*(n+1);
         int s = 0;
         for(int i = 0; i < n-2; i++){
            s = s + d;
            cout<<str.substr(n+2,c-s-(n+2));
            d--;
         }
         cout<<last;
      }
   }
   return 0;
}
