#include <stdio.h>
#include <stdlib.h>
struct node {
   int data;
   struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;
void printList() {
   struct node *ptr = head;
   printf("\n[head] =>");
   while(ptr != NULL) {
      printf(" %d =>",ptr->data);
      ptr = ptr->next;
   }
   printf(" [null]\n");
}

void insert(int data) {
   struct node *link = (struct node*) malloc(sizeof(struct node));
   link->data = data;
   link->next = head;
   head = link;
}
int main() {
    int i,element,n;
   printf("Welcome to linked list\n");
   printf("Enter Range \n");

   scanf("%d",&n);
   printf("Enter %d Elements \n",n);
   for(i=0;i<n;i++)
{
  scanf("%d",&element);
insert(element);
}
   printList();
   return 0;
}
