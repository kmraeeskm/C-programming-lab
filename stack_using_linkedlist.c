#include<stdio.h>
#include<stdlib.h>
void push(int n);
void pop(int n);
void display();
int loc=0;
struct node
{
  int data;
  struct node *link;	
};

struct node *top = NULL;

void main()
{
 int size;
 printf("\nEnter the size of stack : ");
 scanf("%d",&size);
 int ch;
 while(ch!=4)
 {
  printf("\nStack using Linked List Operations : ");
  printf("\n\n1.PUSH 2.POP 3.DISPLAY 4.EXIT \n ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1 : printf("\nStack Push Operation");
             push(size);
             break;
    case 2 : printf("\nStack Pop Operation");
             pop(size);
             break;
    case 3 : printf("\nDisplaying the Stack : \n");
             display();
             break;
    case 4 : printf("\nExiting from the program....");
             exit(0);
             break;
    default : printf("\nInvalid Input");  
              break;

  } 
  
 }

}

void push(int n)
{
 if(loc==n)
 printf("Stack Overflow");
 else if(top==NULL)
 {
  struct node *ptr = (struct node*)malloc(sizeof(struct node*));
  int item;
  printf("\nEnter the data to push : ");
  scanf("%d",&item);
  ptr->data = item;
  top=ptr;
  ptr->link = NULL;
  loc=loc+1;
 }
 else
 {
   struct node *ptr = (struct node*)malloc(sizeof(struct node*));
   int item;
   printf("\nEnter the data to push : ");
   scanf("%d",&item);
   ptr->data = item;
   ptr->link = top;
   top = ptr;
   loc=loc+1;
 }

}

void pop(int n)
{
 if(loc==0)
 {
  printf("\nStack underflow");
 }

 else
 {
  struct node *ptr;
  ptr=top;
  printf("\n%d is popped from the stack",ptr->data);
  top=ptr->link; 
  loc=loc-1;
  free(ptr);
 }

}
void display()
{
  struct node *ptr;
  ptr=top;
  while(ptr!=NULL)
  {
   printf("%d\n",ptr->data);
   ptr=ptr->link;
  }

}














