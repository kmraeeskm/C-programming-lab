#include<stdio.h>
#include<stdlib.h>
#define max 
int cq[4];
void cq_insert(int x);
void cq_delete();
void display();
int front=-1;
int rear=-1;

void main()
{
  int op=0;
  int num; 
  while(op!=4)
  {
   printf("\n\nQueue Operation\n\n1. Enqueue \t2.Dequeue \t3.Display \t4.Exit\n");
   scanf("%d",&op);
   switch(op)
   {
    case 1 : printf("\nCircular Queue Insert Operation");
             printf("\nEnter the data to be inserted into the queue : ");
             scanf("%d",&num);
             cq_insert(num);
             break;

    case 2 : printf("\nCircular Queue Delete Operation");
             cq_delete();
             break;

    case 3 : printf("\nDisplaying elements : ");
             display();
             break;

    case 4 : printf("Exiting....");
             exit(0);
             break;
 
    default : printf("Invalid input");
              break;          
   }

  }

}

void cq_insert(int x)
{
 if(front==(rear+1)%4)
   printf("\nQueue Overflow");
 else if(front==-1 && rear==-1)  
 {
  rear=0;
  front=0;
  cq[rear]=x;
  printf("\n%d inserted to Queue",x);
 } 
 else
 {
  rear=(rear+1)%4;
  cq[rear] = x;
 
 }
}

void cq_delete()
{
 int data;
 if(front==-1)
  printf("\nQueue Underflow");
 else if(front==rear)
 {
  data = cq[front];
  front=-1;
  rear=-1;
  printf("\n%d is removed from queue",data);
 }
 else
 {
  data=cq[front];
  front=(front+1)%4;
  printf("\n%d is removed from queue",data);
 }
}
void display()
{
 int i;
 int f=front;
 int r=rear;
 if(rear==-1 && front==-1)
 {
  printf("\nThere is no element to display");
 }
 else
 {
  if(f==r)
	printf(" %d",cq[r]);
  else if(f<r)
   for(i=f;i<=r;i++)
     printf(" %d",cq[i]);
  else if(r<f)
  {
    for(i=f;i<4;i++)
     printf(" %d",cq[i]);
    for(i=0;i<=r;i++)
     printf(" %d",cq[i]);
  }

 }
}