#include<stdio.h>
#include<stdlib.h>

void enqueue(int x);
void dequeue();
void display();

struct node
{
    int data;
    struct node *link;
    
};
struct node *front = NULL;



void main()
{
  int op=0;
  int num; 
  while(op!=4)
  {
   printf("\nQueue Operation\n\n1. Enqueue \t2.Dequeue \t3.Display \t4.Exit\n");
   scanf("%d",&op);
   switch(op)
   {
    case 1 : printf("\nEnqueue Operation");
             printf("\nEnter the data to be inserted into the queue : ");
             scanf("%d",&num);
             enqueue(num);
             break;

    case 2 : printf("\nDequeue Operation");
             dequeue();
             break;

    case 3 : printf("\nDisplaying elements");
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

void enqueue(int x)
{
    if (front==NULL)
    {
        struct node *ptr;
        ptr = (struct node*)malloc(sizeof(struct node*));
        ptr->data = x;
        front = ptr;
        ptr->link = NULL;
    }

    else
    {
        struct node *ptr;
        struct node *temp;
        temp=front;
        ptr = (struct node*)malloc(sizeof(struct node*));
        ptr->data = x;
        while (temp->link!=NULL)
        {
            temp = temp->link;
        }
        temp->link = ptr;
        ptr->link = NULL;
        
    }
        
}
void dequeue()
{
    if(front==NULL)
    {
        printf("Queue underflow");
    }
    else
    {
        int data;
        struct node *ptr;
        ptr = front;
        front = ptr->link;
        data = ptr->data;
        printf("\n%d is removed from the queue",data);
        free(ptr);
    }

}

void display()
{
    if(front==NULL)
    printf("\nQueue is empty\n");
    else
    {
        struct node *ptr;
         ptr = front;
         while(ptr!=NULL)
         {
             printf("\t%d",ptr->data);
             ptr=ptr->link;
         }
             
    }

} 