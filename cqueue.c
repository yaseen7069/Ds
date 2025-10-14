#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int q[SIZE];
int rear=0,front=0;
void insertq(int item)
{
int r1=rear;
r1=(r1+1)%SIZE;
if(r1==front)
printf("Queue is full");
else
	{
		rear=1;
		q[rear]=item;
	}
}
int deleteq1(int*status)
{
if(front==rear)
{
*status=0;
printf("queue is empty\n");}
else
	{
		front=(front+1)%SIZE;
		*status=1;
		return q[front];
	}
}
int searchq(int item)
{
int t;
if(front!=rear)
	{
		t=front;
		t=(t+1)%SIZE;
		while(t!=rear&&q[t]!=item)
		t=(t+1)%SIZE;
		if(q[t]==item)
		return t;
		else
		return 0;
	}
else
return 0;
}
void main()
{
int item,opt,ans,status;
do
{
printf("\n1.Insert\n");
printf("\n2.Delete\n");
printf("\n3.Search\n");
printf("\n4.Exit\n");
printf("\n enter your option");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("\n Enter the data:");
scanf("%d",&item);
insertq(item);
break;
case 2:item:deleteq1(&status);
if(status==1)
printf("Deleted=%d",item);
break;
case 3:printf("Enter the number to search:");
scanf("%d",&item);
ans=searchq(item);
if(ans==0)
printf("not found");
else
printf("item found at %d position\n",ans);
break;
case 4:exit(0);
}
}
while(1);
}

