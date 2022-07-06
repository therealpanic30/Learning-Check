#include<stdio.h>
#include<stdlib.h>
struct node{
	int val;
	struct node *next;
};

void display(struct node **head) {
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	if(*head==NULL) {
		printf("\nList is Empty");
	}
	else {
		for(temp=*head;temp!=NULL;temp=temp->next) {
			printf("\n%d",temp->val);
		}
	}
}
void insert_start(struct node**head,int item) {
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->val=item;
	temp->next=NULL;
	if(*head==NULL) {
		*head=temp;
	}
	else {
		temp->next=*head;
		*head=temp;
	}
}
void insert_end(struct node**head,int item) {
	struct node *temp,*temp1;
	temp=(struct node *)malloc(sizeof(struct node));
	temp1=(struct node *)malloc(sizeof(struct node));
	temp->val=item;
	temp->next=NULL;
	if(*head==NULL) {
		*head=temp;
	}
	else {
		for(temp1=*head;temp1->next!=NULL;temp1=temp1->next);
		temp1->next=temp;
	}
}
void insert_pos(struct node**head,int item,int pos) {
	struct node *temp,*t1,*t2;
	int i;
	temp=(struct node *)malloc(sizeof(struct node));
	t1=(struct node *)malloc(sizeof(struct node));
	t2=(struct node *)malloc(sizeof(struct node));
	temp->val=item;
	temp->next=NULL;
	t1=*head;
	t2=*head;
	for(i=1;i<pos;i++) {
		t1=t2;
		t2=t2->next;
	}
	t1->next=temp;
	temp->next=t2;
}
void del_start(struct node**head) {
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp=*head;
	if(*head==NULL)
	{
		printf("\nList is empty");
	}
	else
	{
	    printf("deleted element is %d",temp->val);
	    *head=temp->next;
	    temp->next=NULL;
	    free(temp);
	}
}
void del_end(struct node**head) {
	struct node *temp,*del;
	temp=(struct node *)malloc(sizeof(struct node));
	del=(struct node *)malloc(sizeof(struct node));
	if(*head == NULL)
	{
		printf("\nlist is empty");
	}
	else
	{
		
		for(temp=*head;temp->next->next!=NULL;temp=temp->next);
		del=temp->next;
		temp->next=NULL;
		printf("deleted element is %d",del->val);
		free(del);
	}
}
void del_pos(struct node**head,int pos) {
	struct node *temp,*t1,*del;
	int i;
	temp=(struct node *)malloc(sizeof(struct node));
	del=(struct node *)malloc(sizeof(struct node));
	t1=*head;
	for(i=1;i<pos-1;i++) {
		t1=t1->next;
	}
	del=t1->next;
	t1->next=t1->next->next;
	free(del);
}
void search(struct node**head,int item) {
	struct node *temp;
	int i=0;
	temp=(struct node *)malloc(sizeof(struct node));
	if(*head==NULL) {
		*head=temp;
	}
	else {
		for(temp=*head;temp->next!=NULL;temp=temp->next) {
			if(temp->val == item) {
				i++;
				break;
			}
		}
		
	}
	if(i==1) {
		printf("Value found");
	}
	else {
		printf("Value not found");
	}
}
void sort(struct node **head) {
	struct node *temp,*temp1,*end;
	temp=(struct node *)malloc(sizeof(struct node));
	temp1=(struct node *)malloc(sizeof(struct node));
	end=(struct node *)malloc(sizeof(struct node));
	end=NULL;
	int i;
	if(*head==NULL) {
		printf("List Empty");
	}
	else {
		for(temp=*head;temp!=NULL;temp=temp->next) {
			for(temp1=*head;temp1!=end;temp1=temp1->next) {
				if(temp1->val < temp->next->val) {
					i=temp->next->val;
					temp->next->val=temp->val;
					temp->val=i;
				}
			}
			end=temp1;
		}
	}
}
void reverse(struct node **head) {
	struct node *last,*prev, *present;
	last=(struct node *)malloc(sizeof(struct node));
	prev=(struct node *)malloc(sizeof(struct node));
	present=(struct node *)malloc(sizeof(struct node));
	last=NULL;prev=NULL;present=*head;
	while(present!=NULL) {
		last=present->next;
		present->next=prev;
		prev=present;
		present=last;
	}
	*head=prev;
}
void create_sll(struct node **head)
{
	struct node *temp,*n;
	

	temp=*head;
	int i;
	char ch;
	do {
		printf("Enter the value to be inserted: ");
		scanf("%d",&i);
		n=(struct node *)malloc(sizeof(struct node));
		n->val=i;
		n->next=NULL;
		if(*head==NULL) {
			*head=n;
			temp=*head;
		}
		else {
			temp->next=n;
			temp=temp->next;
		}
		printf("Continue? y or n");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='y');
}
int main() {
	struct node *my_list=NULL;
	int ch,ele,pos;
	do
	{
		printf("\n0.display\n1.insert_start\n2.insert_end\n3.insert_pos\n4.del_start\n5.del_end\n6.del_pos\n7.Search\n8.Sort\n9.Reverse\n10.Create\n11.exit");
		printf("\nenter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 0:	display(&my_list);
			     	break;
			case 1: printf("\nElement to be inserted at beggining:");
					scanf("%d",&ele);
					insert_start(&my_list,ele);
					break;
			case 2: printf("\nElement to be inserted at end of list:");
					scanf("%d",&ele);
					insert_end(&my_list,ele);
					break;
			case 3: printf("\nEnter element to be inserted and its position" );
					scanf("%d %d",&ele,&pos);
					insert_pos(&my_list,pos,ele);
					break;
			case 4: del_start(&my_list);
					break;
			case 5: del_end(&my_list);
					break;
			case 6: printf("enter position of element to be deleted");
					scanf("%d",&pos);
					del_pos(&my_list,pos);
					break;
			case 7: printf("\nElement to be searched:");
					scanf("%d",&ele);
					search(&my_list,ele);
					break;
			case 8: sort(&my_list);
					break;
			case 9: reverse(&my_list);
					printf("\nList has been reversed");
					break;
			case 10:create_sll(&my_list);
					break;
			case 11:exit(0);
			default:printf("Enter correct choice");
		}
	}while(1);
	return 0;
}
