#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *prev;
	struct node *next;
}*head=NULL,*last=NULL, *temp;

int count = 0;

void create_node(int a){
	temp = (struct node *) malloc (sizeof(struct node));
		temp -> next = NULL;
		temp -> prev = NULL;
		temp -> data = a;
		count++;
}

void insert_at_beg(int a){
	create_node(a);
	if(head == NULL){
		head = temp;
		last = temp;
	}
	else{
		temp -> next = head;
		head -> prev = temp;
		head = temp;
	}
}

void insert_at_end(int a){
	if(head == NULL)
		insert_at_beg(a);
	else{
		create_node(a);
		last -> next = temp;
		temp -> prev = last;
		last = temp;
	}
}

void insert_after_pos(int pos, int a){
	if(head == NULL)
	{
		printf("The list is empty\n");
		insert_at_beg(a);
	}
	else if(pos > count)
	{
		printf("The position doesn't exist\n Adding at the end.\n");
		insert_at_end(a);
	}
	else
	{
		struct node * t3;
		t3 = head;
		for (int i = 0; i < pos; i++)
			t3 = t3 -> next;
		temp -> next = t3 -> next;
		temp -> prev = t3;
		t3 -> next;
			}		
}

void display_nodes(){
	struct node * temp2;
	temp2 = head;
	while(temp2 != NULL){
		printf("%d\t",temp2 -> data);
		temp2 = temp2 -> next;
	}
	printf("\n");
}

int main(){
	int choice, elem;
	while(1){
		printf("1. To insert at the beginning of the list\n2. To insert at the end of the list\n3. Display\n4. Exit\n");
		printf("Please enter the choice\n");
		scanf("%d",&choice);
		switch(choice){
		case 1: printf("Enter the value to be inserted\n");
				scanf("%d",&elem);
				insert_at_beg(elem);
				break;
		case 3: printf("The elements are\n");
				display_nodes();
				break;
		case 4: exit(0);
				break;
		case 2: printf("Enter the value to be inserted\n");
				scanf("%d",&elem);
				insert_at_end(elem);
				break;
		}	
	}
	
	return 0;
}


