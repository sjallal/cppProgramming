#include<bits/stdc++.h>
using namespace std;

typedef struct node{
  int data;
  node* next;
} node;

node *head = '\0';

void create_list(){
  int n, data;
  node *nNode, *t;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  printf("\nEnter %d elements to be insert: ", n);
  head = (node*)malloc(sizeof(node));
  scanf("%d", &head->data);
  head->next = '\0';
  t = head;
  for(int i = 1; i < n; i++){
    scanf("%d", &data);
    nNode = (node*)malloc(sizeof(node));
    nNode->data = data;
    nNode->next = '\0';
    t->next = nNode;
    t = t->next;
  }
}

void display(node *node){
  printf("\n");
  while(node != '\0'){
    printf("%d ", node->data);
    node = node->next;
  }
  printf("\n");
}

void rev_iter(){
  node *pre, *cur, *nex;
  cur = head;
  pre = NULL;
  nex = NULL;
  while(cur != NULL){
    nex = cur->next;
    cur->next = pre;
    pre = cur;
    cur = nex;
  }
  head = pre;
}

node* rev_recursion(node *start){
//  node *LastNode;
  if(start->next == '\0'){
    head = start;
    return start;
  }
//  LastNode = rev_recursion(start->next);
//  LastNode->next = start;
  rev_recursion(start->next)->next = start;
  start->next = '\0';
  return start;
}

void rev_stack(){
  if(head == '\0') return;
  stack<node*> S;
  node *temp = head;
  while(temp != '\0'){
    S.push(temp);
    temp = temp->next;
  }
  temp = S.top();
  head = temp;
  S.pop();
  while(!S.empty()){
    temp->next = S.top();
    S.pop();
    temp = temp->next;
  }
  temp->next = '\0';
}

int main(){
  create_list();
  display(head);

  rev_iter();
  display(head);

  rev_recursion(head);
  display(head);

  rev_stack();
  display(head);

  return 0;
}
