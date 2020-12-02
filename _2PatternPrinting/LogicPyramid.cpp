#include<iomanip>
#include<iostream>

using namespace std;

int main(){
   int n, m = 1, s = 6, d = 22;
   cin>>n;
   for(int i = 1; i <= n; i++){
      for(int s = 1; s <= (n-i)*3; s++){
         cout<<" ";
      }
      for(int j = 1; j <= m; j++){
         cout<< setfill('0') << setw(5) <<s<<" ";
         s += d;
         d += 16;
      }
      m++;
      cout<<endl;
   }
}
