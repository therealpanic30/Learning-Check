#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define size 5
int front=-1,rear=-1;
int dq[size];

void renqueue(int item) {
	if((rear+1)%size==front) {
		printf("\nOverflow");
	}
	else if(rear==-1 && front==-1) {
		rear++;
		front++;
		dq[rear]=item;
	}
	else{
		rear=(rear+1)%size;
		dq[rear]=item;
	}
}

void fenqueue(int item) {
	if((rear+1)%size==front) {
		printf("\nOverflow");
	}
	else if(rear==-1 && front==-1) {
		rear++;front++;
		dq[front]=item;
	}
	else{
		rear=(rear+1)%size;
		dq[rear]=item;
	}
}
