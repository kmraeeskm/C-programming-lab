#include <stdio.h>
#include <stdlib.h>
# define MAX 100
int size,choice,top=-1;
int stack[MAX];
void display(void);
void insert(void);
void delete(void);
void main() {
   printf("Enter the size of stack:");
   scanf("%d",&size);
   printf("\n\n-----------MENU----------");
   printf("\n1.INSERT\t\t2.DELETE \n3.VIEW\t\t4.EXIT\n");
   do{
      
      printf("\nEnter your choice:");
      scanf("%d",&choice);
      switch (choice)
      {
      case 1:{
         insert();
         break;
      }
      case 2:{
         delete();
         break;
      }
      case 3:{
         display();
         break;
      }
      case 4: {
         printf("\nExit point");
         break;
      }
      default:{
         printf("\nEnter a valid choice:");
      }
         break;
      }
   }while(choice!=4);
}

void insert(){
if(top>=size-1){
   printf("\nOverflow");
}
else{
int num;
 printf("\nEnter the numberyou want to insert:");  
 scanf("%d",&num);
 top++;
 stack[top]=num;
}
}

void delete()
{
   if (top==-1)
   {
      printf("\n Stack is Empty");
   }
   else{
      top--;
   }
}
 
void display(){
   if (top==-1){
      printf("\nNOthing to display");

   }
   else{
      for(int i=0;i<=top;i++)
      {
         printf("%d  ",stack[i]);
      }
   }
}
