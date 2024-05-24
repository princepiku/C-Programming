// WAP to implementation push, pop and traverse operation or stack.

/*

#include<stdio.h>
#include<conio.h>
#define n 10

int stk[n];
int top = -1;

void push(int item);
int pop();
void traverse();

void main()
{
	int item, delitem;
	int choice;
	
	while(1)
	{
		printf("\n ----- Stack Operation -----\n");
		printf("\n 1: Push item.");
		printf("\n 2: Pop element.");
		printf("\n 3: Traverse stack.");
		printf("\n 4: Exit program.");
		printf("\n -----------------------------");
		printf("\n Enter Your Choice : ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf(" Enter the item to push : ");
				scanf("%d", &item);
				push(item);
				break;
			case 2:
				delitem = pop();
				printf("\n Deleted item = %d \n", delitem);
				break;
			case 3:
				printf("\n ------ Stack  Elements ------ \n");
				traverse();
				break;
			case 4:
				printf("\n End of program.......... \n");
				getch();
				//break;	
			default :
				printf("\n Invalid Choice ! \n");				
		}
	}
}
void push(int item)
{
	if(top == n-1)
	{
		printf("\n Stack overflow !");
		printf("\n Item can't pushed");
	}
	top = top + 1;
	stk[top] = item;	
}
int pop()
{
	int delitem;
	if(top == -1)
	{
		printf("\n Stack empty !");
		printf("\n No. item to pop");
		return 0;	
	}
	delitem = stk[top];
	top = top - 1;
	return delitem;
}
void traverse()
{
	int i;
	if(top == -1)
	{
		printf("\n Stack empty !");
		printf("\n No. item to push");
	}
	for(i = top; i >= 0; i--)
	printf("\t %d ", stk[i]);
}


*/


#include<stdio.h>
#include<process.h>
#include<stdlib.h>
 
#define MAX 10 // Maximum number of elements that can be stored.
 
int top = -1, stack[MAX];
void push();
void pop();
void display();
 
void main()
{
	int ch;
	while(1) // infinite loop, will end when choice will be 4.
	{
		printf("\n----- Stack Menu -----");
		printf("\n\n1. Push\n2. Pop\n3. Display\n4. Exit");
		printf("\n\nEnter your choice(1 - 4) : ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: display();
			break;
			case 4: exit(0);
			default: printf("\nWrong Choice ! ");
		}
	}
} 
void push()
{
	int val;
	if(top==MAX-1)
	{
		printf("\nStack is full ! ");
	}
	else
	{
		printf("\nEnter element to push : ");
		scanf("%d", &val);
		top = top + 1;
		stack[top] = val;
	}
}
void pop()
{
	if(top == -1)
	{
		printf("\nStack is empty ! ");
	}
	else
	{
		printf("\nDeleted element is %d", stack[top]);
		top = top - 1;
	}
}
void display()
{
	int i;
	if(top == -1)
	{
		printf("\nStack is empty ! ");
	}
	else
	{
		printf("\nStack is.....\n");
		for(i = top; i >= 0; --i)
		printf(" %d ", stack[i]);
	}
}

