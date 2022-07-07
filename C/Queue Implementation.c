#include<stdio.h>
#include<stdlib.h>
#define size 5
int front=-1,rear=-1;
int q[size];

int enqueue(int item) {
	if(rear==size-1) {
		//Overflow
		printf("OverFlow");
		return -127;
	}
	else if(rear==-1) {
		rear++;
		front++;
		q[rear]=item;
		return 1;
	}
	else{
		rear++;
		q[rear]=item;
		return 1;
	}
}

int dequeue() {
	int k;
	if(front==-1) {
		printf("\nUnderFlow");
		return -127;
	}
	else {
		return q[front++];
	}
}

int peek() {
	if(front==-1) {
		printf("\nQueue is Empty");
		return -127;
	}
	else {
		return q[front];
	}
}

void display() {
	int i;
	if(front==-1) {
		printf("\nQueue is Empty");
	}
	else {
		printf("\nElements in the Queue are: ");
		for(i=0;i<size;i++) {
			printf("%d ",q[i]);
		}
	}
}

int main() {
	int choice,k,n;
	while(1){
		printf("\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\nEnter Your Choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 0: 
				exit(0);
			case 1: printf("\nEnter item to be Enququed into the Queue:");
					scanf("%d",&n);
					k=enqueue(n);
					if(k==1)
					{
						printf("\n%d has been Enqueued into the Queue",n);
					}
					break;
			case 2:	n=dequeue();
					if(n!=-127)
					{
						printf("\n%d has been Dequeued from the Queue",n);
					}
					break;
			case 3:	printf("\n%d",peek());
					break;
			case 4:	display();
					break;
			default: printf("\nEnter a valid choice!!");	
		}
	}while(1);
	return 0;
}


