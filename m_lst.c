#include<stdio.h>

#include<conio.h>

#include<malloc.h>

struct node

{

    int data;

    struct node *next;

}*p=NULL;

void add(int num)

{

    struct node *temp;

    temp=(struct node *)malloc(sizeof(struct node));

    temp->data=num;

    if(p==NULL)

    {

        temp->next=NULL;

        p=temp;

    }

    else

    {

        temp->next=p;

        p=temp;

    }

 

 

}

void addend(int num)

{

    struct node* temp,*r;

     temp=(struct node *)malloc(sizeof(struct node));

    temp->data=num;

    if(p==NULL)

    {

        temp->next=NULL;

    }

    else

    {

       r=p;

       while(r->next!=NULL)

       {

           r=r->next;

 

       }

       temp->next=NULL;

       r->next=temp;

    }

    }

    void addafter(int num,int numafter)

    {

          struct node* temp,*loc;

     temp=(struct node *)malloc(sizeof(struct node));

    temp->data=num;

    loc=search(numafter);

    if(loc==NULL)

   {

      printf("Insertion not possible: ");

      return;

    }

    else

    {

      temp->next=loc->next;

      loc->next=temp;

 

       }

    }

    void delatbeg()

    {

    struct node* r;

    r=p;

        if(p==NULL)

        {

            printf("Deletion not possible");

        }

        else{

            p=r->next;

            free(r);

        }

    }

    void delatend()

    {

        struct node*r1,*r2;

        r1=p;

           if(p==NULL)

        {

            printf("Deletion not possible");

        }

        else if(r1->next==NULL)

        {

            r1=p;

            p=NULL;

            free(r1);

        }

        else{

                r1=p;

                r2=p->next;

            while(r2->next!=NULL)

            {

                r1=r2;

                r2=r2->next;

            }

            r1->next=NULL;

            free(r2);

 

 

        }

    }

    void delat(int num)

    {

         struct node*r1,*loc;

        r1=p;

       loc=search(num);

           if(p==NULL)

        {

            printf("Deletion not possible");

        }

        else if(r1->next==NULL)

        {

            r1=p;

            p=NULL;

            free(r1);

        }

        else{

 

            r1=loc->next;

            loc->next=r1->next;

            free(r1);

        }

 

    }

struct node * search(int num)

{

    struct node* r;

    r=p;

    while(r!=NULL)

    {

        if(r->data==num)

        {

            return r;

            break;

        }

        r=r->next;

    }

    return NULL;

    }

void display()

{

    printf("\n-------------------Linked List-------------------\n");

struct node *r;

r=p;

if(r==NULL)

{

    printf("\n Link list is empty ");

}

else

{

   while(r!=NULL)

   {

        printf("\n %d",r->data);

        r=r->next;

    }

}

}

void main()

{

    static int choice,num,numafter;

    while(1)

    {

        printf("\n\n Menu");

        printf("\n1.Insertion at Beginning:");

        printf("\n2.Insertion at End:");

        printf("\n3.Insertion After given Node:");

        printf("\n4.Deletion at Beginning:");

        printf("\n5.Deletion at End:");

        printf("\n6.Deletion After given Node:");

        printf("\n7. Display:");

        printf("\nEnter your choice: ");

        scanf("%d",&choice);

            switch(choice)

            {

                case 1: printf("Enter the Number: ");

                scanf("%d",&num);

                add(num);

                break;

                case 2:printf("Enter the number: ");

                        scanf("%d",&num);

                        addend(num);

                        break;

                case 3:printf("Enter the number:");

                       scanf("%d",&num);

                       printf("Enter the number after you want to add:");

                       scanf("%d",&numafter);

                       addafter(num,numafter);
                       break;

                case 4:delatbeg();

                       break;

                case 5:delatend();

                        break;

                case 6:printf("Enter the number after you want to add:");

                       scanf("%d",&numafter);

                       delat(numafter);

                       break;

                case 7: display();

   

            }

    }

}