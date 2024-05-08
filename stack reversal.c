#include<stdio.h>
#include<stdlib.h>
#define MAX 30
char stack[MAX];
int top=-1;
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;

void create();
void display();
void reverse();
void push(char num);
char pop();

NODE *head=NULL;

int main()
{
	create();
	printf("list before the reversal :\n");
	display();
	reverse();
	printf("list after the reversal :\n");
	display();
}

void create()
{
	NODE *cur,*temp;
	int num,choice;
	char ch;
	do
	{
		printf("enter the number :\n");
		scanf("%d",&num);
		temp=(NODE *)malloc(sizeof(NODE));
		temp->data=num;
		if(head==NULL)
		{
			head=cur=temp;
		}
		else
		{
			cur->next=temp;
			cur=temp;
		}
		printf("do you want to proceed (y/n) :\n");
		scanf("%d",&choice);
	}
	while(ch==1);
	cur->next=NULL;	
}

void display()
{
	NODE *temp=head;
	if(head==NULL)
	{
		printf("stack is empty :\n");
	}
	else
	{
		printf("stack content :\n");
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
	}
}
void reverse()
{
	NODE *cur=head;
	while(cur!=NULL)
	{
		push(cur->data);
		cur=cur->next;
	}
	cur=head;
	while(cur!=NULL)
	{
		cur->data=pop();
		cur=cur->next;
	}
}
void push(char num)
{
	if(top==MAX-1)
	{
		printf("stack is overflow :\n");
	}
	else
	{
		top=top+1;
		stack[top]=num;
	}
}
char pop()
{
	return stack[top--];
}

		
	
