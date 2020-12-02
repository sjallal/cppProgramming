#include<iostream>
#define MAX_SIZE 101
using namespace std;
int A[MAX_SIZE];
int top = -1;

bool isEmpty(){
  if(top == -1) return true;
  return false;
}

void push(int x){
  if(top == MAX_SIZE - 1) {
    printf("ERROR: Stack Overflow\n");
    return;
  }
  A[++top] = x;
}

int pop(){
  if(!isEmpty())
    return A[top--];
  printf("\n!!!Stack is Empty!!!\n");
  exit(1);
}

void display(){
  cout<<endl<<"Stack ==> ";
  for(int i = 0; i <= top; i++){
    cout<<A[i]<<" ";
  }
  cout<<endl<<endl;
}

int main(){
  int choice, data;
  while(1){
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. isEmpty\n");
    printf("4. Display\n");
    printf("5. Quite\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice){
      case 1:
        printf("Enter the element to be inserted: ");
        scanf("%d", &data);
        push(data);
        break;
      case 2:
        cout<<"Popped item is: "<<pop()<<endl;
        break;
      case 3:
        cout<<isEmpty()<<endl;
        break;
      case 4:
        display();
        break;
      case 5:
        exit(1);
      default:
        printf("Invalid choice\n");
    }
  }
  return 0;
}
