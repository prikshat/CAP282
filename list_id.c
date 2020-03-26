#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;


void display(struct node *list) {
   if(list == NULL) {
      printf("[null] => ");
      return;
   }

   display(list->next);
   printf(" %d =>",list->data);

}


void insert(int data) {

   struct node *link = (struct node*) malloc(sizeof(struct node));

   link->data = data;
   link->next = NULL;


   if(head==NULL) {
      head = link;
      return;
   }

   current = head;


   while(current->next!=NULL)
      current = current->next;


   current->next = link;
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
display(head);
   return 0;
}
