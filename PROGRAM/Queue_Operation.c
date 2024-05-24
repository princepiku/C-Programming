// WAP to Implementaion in Queue Operation.
#include<stdio.h>
#include<conio.h>
#define n 5

int que[n];
int front = -1;
int rear = -1;
void push(int item);
int pop();
void traverse();

void main()
{
	int item, delitem;
	int choice;
	while(1)
	{
		printf("\n-------- Queue Operation --------\n");
		printf("\n\t1. Push element.");
		printf("\n\t2. Pop element.");
		printf("\n\t3. Traverse element.");
		printf("\n\t4. Exit program.\n");
		printf("\n------------------------------\n");
		printf("\n\tEnter Your Choice (1 - 4) -> ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: 
				printf("\nEnter item to push = ");
				scanf("%d", &item);
				push(item);
			break;
			
			case 2:
				delitem = pop();
				printf("\nDeleted item = %d \n", delitem);	
			break;
			
			case 3:
				printf("\n---------------- Queue Elements ---------------\n");
				traverse();
			break;
			
			case 4:
				printf("\n---------- End Program ----------\n");
				getch();
			break;
				
			default:
				printf("\nInvalid choice..........\n");
		}
	}
}

void push(int item)
{
	if(rear == n-1)
	{
		printf("\nQueue overflow !\n");
	}
	if(rear == -1)
		rear = front = 0;
	else
		rear = rear + 1;
		que[rear] = item;
		printf("\nItem pushed successfully..........\n");
}

int pop()
{
	int delitem;
	if(front == -1)
	{
		printf("\n---------- Queue empty ! ----------\n");
		return 0;
	}
	delitem = que[front];
	if(front == rear)
		front = rear == -1;
	else
		front = front + 1;
		return delitem;
}

void traverse()
{
	int i;
	if(front == -1)
	{
		printf("\n---------- Queue empty ! ----------\n");
	}
	for(i = front; i <= rear; i++)
	printf(" { %d } ", que[i]);
}

