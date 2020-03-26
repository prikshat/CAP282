#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//display the list
void display(struct node *list) {
   if(list == NULL) {
      printf("[null] => ");
      return;
   }
   
   display(list->next);
   printf(" %d =>",list->data);
   
}

//Create Linked List
void insert(int data) {
   // Allocate memory for new node;
   struct node *link = (struct node*) malloc(sizeof(struct node));

   link->data = data;
   link->next = NULL;

   // If head is empty, create new list
   if(head==NULL) {
      head = link;
      return;
   }

   current = head;
   
   // move to the end of the list
   while(current->next!=NULL)
      current = current->next;

   // Insert link at the end of the list
   current->next = link; 
}

int main() {
   int element,n;
   printf("Welcome to linked list\n");
   printf("Enter Elements");
   scanf("%d",&n);
   
   return 0;
}