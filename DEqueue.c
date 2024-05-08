/*implementation of dequeue using arrays*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int dequeue[MAX];
int front=-1;
int rear=-1;

void insert_front(int);
void insert_rear(int);
void delete_front();
void delete_rear();
void display();

int main(){
	int ele,choice;
	while(1){
		printf("\n****MENU****\n");
		printf("\n1.insert_front\n");
		printf("\n2.insert_rear\n");
		printf("\n3.delete_front\n");
		printf("\n4.delete_rear\n");
		printf("\n5.display\n");
		printf("\n6.exit\n");
		printf("enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("enter the element you want to be inserted :");
				scanf("%d",&ele);
				insert_front(ele );
				break;
			case 2: printf("enter the element you want to be inserted :");
				scanf("%d",&ele);
				insert_rear(ele );
				break;
			case 3: delete_front();
				break;
			case 4: delete_rear();
				break;
			case 5: display();
				break;
			case 6: exit(0);
			default:printf("enter the correct choice :");
			
		}
	}
	
}

void insert_front(int ele){
	if(front==(rear+1)%MAX)
		printf("Dequeue is Full\n");
	else if(front==-1){
		front=rear=0;
		dequeue[front]=ele;
	}
	else if(front==0){
		front=MAX-1;
		dequeue[front]=ele;
	}
	else{
		front=front-1;
		dequeue[front]=ele;
	}
}

void insert_rear(int ele){
	if((rear+1)%MAX==front)
		printf("Dequeue is Full\n");
	else if(rear==-1){
		front=rear=0;
		dequeue[rear]=ele;
	}
	else{
		rear=(rear+1)%MAX;
		dequeue[rear]=ele;
	}
}

void delete_front(){
	if(front==-1){
		printf("Dequeue is Empty \n");
	}
	else{
		printf("deleted element : %d",dequeue[front]);
		if(front==rear){
			front=rear=-1;
		}
		else{
			front=(front+1)%MAX;
		}
	}
}

void delete_rear(){
	if(front==-1)
		printf("Dequeue if Empty\n");
	else{
		printf("deleted element : %d",dequeue[rear]);
		if(front==rear){
			front=rear=-1;
		}
		else if(rear==0){
			rear=MAX-1;
		}
		else{
			rear=rear-1;
		}
	}
}

void display(){
	int i;
	if(front==-1)
		printf("Dequeue is Empty\n");
	else{
		printf("Dequeue content\n");
		if(front<=rear){
			for(i=front;i<=rear;i++)
				printf("%5d",dequeue[i]);
		}
		else{
			for(i=front;i<=MAX-1;i++)
				printf("%5d",dequeue[i]);
			for(i=0;i<=rear;i++)
				printf("%5d",dequeue[i]);
				
		}
		
		
	}
}
