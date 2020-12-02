#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node* create_list(node *head);
void display(node *head);
void count(node *head);
void search(node *head, int data);
node* addatbeg(node *head, int data);
node* addatend(node *head, int data);
node* addafter(node *head, int data, int item);
node* addbefore(node *head, int data, int item);
node* addatpos(node *head, int data, int pos);
node* del(node *head, int data);
node* rev(node *head);
void sortLL(node *head);

void print_recursion(node *head);
void print_rev_recursion(node *head);
node* rev_recursion (node *head);

node *start = '\0';

int main(){
  node *head = '\0', *n;
  int choice, data, item, pos;
  while(1){
    printf("/ ==================== MAIN MENU ==================== / \n");
    printf(" 1. Create List\n");
    printf(" 2. Display\n");
    printf(" 3. Count\n");
    printf(" 4. Search\n");
    printf(" 5. Add to empty list / Add at beginning\n");
    printf(" 6. Add at end\n");
    printf(" 7. Add after node\n");
    printf(" 8. Add before node\n");
    printf(" 9. Add at position\n");
    printf("10. Delete\n");
    printf("11. Reverse\n");
    printf("12. Print Using Recursion\n");
    printf("13. Reverse Print Using Recursion\n");
    printf("14. Reverse Using Recursion\n");
    printf("15. Sort the Linked List\n");
    printf("99. Quite\n");
    printf("/ ==================== +++++++++ ====================\\n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice){
    case 1:
      head = create_list(head);
      break;

    case 2:
      display(head);
      break;

    case 3:
      count(head);
      break;

    case 4:
      printf("Enter the element to be searched : ");
      scanf("%d", &data);
      search(head, data);
      break;

    case 5:
      printf("Enter the element to be inserted : ");
      scanf("%d", &data);
      head = addatbeg(head, data);
      break;

    case 6:
      printf("Enter the element to be inserted : ");
      scanf("%d", &data);
      head = addatend(head, data);
      break;

    case 7:
      printf("Enter the element to be inserted : ");
      scanf("%d", &data);
      printf("Enter the element after which to insert : ");
      scanf("%d", &item);
      head = addafter(head, data, item);
      break;

    case 8:
      printf("Enter the element to be inserted : ");
      scanf("%d", &data);
      printf("Enter the element before which to insert : ");
      scanf("%d", &item);
      head = addafter(head, data, item);
      break;

    case 9:
      printf("Enter the element to be inserted : ");
      scanf("%d", &data);
      printf("Enter the position at which to insert : ");
      scanf("%d", &item);
      head = addafter(head, data, item);
      break;

    case 10:
      printf("Enter the element to be deleted : ");
      scanf("%d", &data);
      head = del(head, data);
      break;

    case 11:
      head = rev(head);
      break;
    case 12:
      printf("\n+++++++++++++\n\n==> Printing using Recursion: ");
      print_recursion(head);
      printf("\n\n+++++++++++++++++++++\n\n");
      break;
    case 13:
      printf("\n+++++++++++++\n\n==> Reverse printing using Recursion: ");
      print_rev_recursion(head);
      printf("\n\n+++++++++++++++++++++\n\n");
      break;
    case 14:
      rev_recursion(head);
      head = start;
      start = '\0';
      break;
    case 15:
      sortLL(head);
      break;
    case 99:
      exit(1);
    default:
      printf("Wrong choice.\n");
    }
  }
  return 0;
}

node* create_list(node* head){
  int i, n, data;
  printf("Enter the number of nodes: ");
  scanf("%d", &n);
  head = '\0';
  if(n == 0) return head;
  printf("Enter the element to be inserted : ");
  scanf("%d", &data);
  head = addatbeg(head, data);
  for(i = 2; i <= n; i++){
    printf("Enter the element to be inserted : ");
    scanf("%d", &data);
    head = addatend(head, data);
  }
  display(head);
  return head;
}

void display(node *head){
  node *p;
  if(head == '\0'){
    printf("\n==> List is empty\n\n");
    return;
  }
  p = head;
  printf("+++++++++++++++++++++\n\n==> List is : ");
  while(p != '\0'){
    printf("%d ", p->data);
    p = p->next;
  }
  printf("\n\n+++++++++++++++++++++\n\n");
}

void count(node *head){}
void search(node *head, int data){}

node* addatbeg(node *head, int data){
  node *tmp;
  tmp = (node *)malloc(sizeof(node));
  tmp->data = data;
  tmp->next = head;
  head = tmp;
  return head;
}

node* addatend(node *head, int data){
  node *tmp, *newNode;
  tmp = head;
  newNode = (node *)malloc(sizeof(node));
  newNode->data = data;
  newNode->next = '\0';
  while(tmp->next != '\0'){
    tmp = tmp->next;
  }
  tmp->next = newNode;
  return head;
}
node* addafter(node *head, int data, int item){}
node* addbefore(node *head, int data, int item){}
node* addatpos(node *head, int data, int pos){}
node* del(node *head, int data){}
node* rev(node *head){
  node *prev, *cur, *nex;
  cur = head;
  prev = '\0';
  nex = '\0';
  while(cur != '\0'){
    nex = cur->next;
    cur->next = prev;
    prev = cur;
    cur = nex;
  }
  head = prev;
  return head;
}

node* rev_recursion (node *head){
  //  node *LastNode;
  if(head->next == '\0'){
    start = head;
    return head;
  }
//  LastNode = rev(head->next);
//  LastNode->next = head;
  rev_recursion(head->next)->next = head;
  head->next = '\0';
  return head;
}

void print_recursion(node *head){
  if(head == '\0') return;
  printf("%d ", head->data);
  print_recursion(head->next);
}

void print_rev_recursion(node *head){
  if(head == '\0') return;
  print_rev_recursion(head->next);
  printf("%d ", head->data);
}

void swapp(node *i, node *j){
  int temp = i->data;
  i->data = j->data;
  j->data = temp;
}

void sortLL(node *head){
  node *i = head, *j, *minn;
  while(i->next != '\0'){
    minn = i;
    j = i->next;
    while(j != '\0'){
      if(j->data < i->data)
        swapp(i, j);
      j = j->next;
    }
    i = i->next;
  }
}


