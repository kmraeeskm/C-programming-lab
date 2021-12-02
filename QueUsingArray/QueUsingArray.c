#include<stdio.h>  
#include<stdlib.h>  
int que[100],choice,front=-1,rear=-1,value;
void enque(void);
void deque(void);
void display(void);
void main()
{
printf("\n -----------------MENU---------------");

printf("\n\t QUE OPERATIONS USING ARRAY");
printf("\n\t--------------------------------");
printf("\n\t 1.ENQUE\n\t 2.DEQUE\n\t 3.DISPLAY\n\t 4.EXIT");
do{
	printf("\nEnter the next  choice  : ");
	scanf("%d",&choice);
	switch(choice)
{
	 case 1:
            {
                enque();
                break;
            }
            case 2:
            {
                deque();
                break;
            }
            case 3:
            {
              display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
	
}

} while(choice!=4);
}
void enque(){
if(rear+1==100)
{
printf("Insertion is not possible Que is full");
}
else{
if(front==-1)
front++;
printf ("\n\t Enter the value you want to insert  ");
scanf("%d",&value);
rear++;
que[rear]=value;
}
}

void deque(){
if(front==-1||front==100||front-1==rear)
{
printf("Deletion is not possible Que is empty");
}
else{
printf("\n\t deleted item from the que is %d" ,que[front]);
if (front==-1)
{
front++;
}
front++;
}
}


void display(){
if (rear==-1)
printf("\n que is empty");
else if(rear==front-1)
{
printf("que is empty");
}
else{
int f=front;
while(f<=rear)
{

printf(" %d ",que[f]);
f++;
}
}
}

