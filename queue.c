#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int Q[SIZE];
int front=0,rear=0;
void main()
{
void enque(int);
int deque(),item,opt;
void display();
do
{
printf("\n1.enque \n2.dequeue \n3.display \n4.exit");
printf("\n your option:");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("Enter item:");
      scanf("%d",& item);
      enque(item);
      break;
case 2:item=deque();
      if (item!=-1)
      printf("deleted value=%d\n",item);
      break;
case 3:display();
      break;  
case 4:exit(0);
 } 
}
while(9);
}
void enque(int x) //function to insert an item into queue
{
int temp;
temp=(rear+1)% SIZE;
if (temp==front) 
printf("Queue is full \n");
else
{
rear=temp;
Q[rear]=x;
}
return;
}
int deque() //function to remove an item from queue
{
if(front==rear)
{
printf("Queue is empty\n");
return -1;
}
else
{
front=(front+1)%SIZE;
return Q[front];
 }
}
void display() //function to display the elements in queue
{
int i;
if (front==rear)
printf("Queue is empty");
else 
{
printf("The queue elements are:\n");
i=(front+1)%SIZE;
do
{
printf("%d\n",Q[i]);
i=(i+1)%SIZE;
}
while(i!=(rear+1)%SIZE);
}
return;
}










       
      
      
