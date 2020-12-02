#include<bits/stdc++.h>
using namespace std;

void Reverse(char *c, int n){
  stack<char> s;
  for(int i = 0; i < n; i++){
    s.push(c[i]);
  }
  for(int i = 0; i < n; i++){
    c[i] = s.top();
    s.pop();
  }
}

int main(){
  char c[100];
  cout<<"Enter a string: ";
  gets(c);
  Reverse(c, strlen(c));
  puts(c);
  return 0;
}
