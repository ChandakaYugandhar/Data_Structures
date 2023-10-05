#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next,*prev;
};
void display(struct Node *head){
	struct Node *end;
	printf("\nList in forward direction:");
	while(head!=NULL){
		printf("%d",head->data);
		end=head;
		head=head->next;
		printf(" ");
	}

	printf("\nList in backward direction:");
	while(end!=NULL){
		printf("%d",end->data);
		end=end->prev;
		printf(" ");
	}
}
void insertfirst(struct Node **head,int data){
	struct Node *newNode=(struct Node *) malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->prev=NULL;
	newNode->next=*head;
	if((*head)!=NULL){
		(*head)->prev=newNode;
	}
	*head=newNode;
	
}
void insertlast(struct Node **head,int data){
	struct Node *newNode=(struct Node *) malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=NULL;
	struct Node *temp=*head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	newNode->prev=temp;
	temp->next=newNode;
}
int calsize(struct Node *head){
	int size=0;
	while(head!=NULL){
		size++;
		head=head->next;
	}
	return size;
}
void insertposition(int pos,struct Node **head,int data){
	int size=calsize(*head);
	struct Node *temp=*head,*pre=NULL;
	if(pos<1||pos>size){
		printf("\ninvalid position");
		return;
	}
	if(pos==1){
		insertfirst(head,data);
		return;
	}
	else if(pos==size){
		insertlast(head,data);
		return;
	}
	struct Node *newNode=(struct Node *) malloc(sizeof(struct Node));
	newNode->data=data;
	for(int i=1;i<pos;i++){
		temp=temp->next;
	}
	newNode->next=temp->next;
	newNode->prev=temp;
	temp->next->prev=newNode;
	temp->next=newNode;

	
	
	
}
void deletefirst(struct Node **head){
	if(*head==NULL){
		printf("\nlinked list is empty,Nothing to delete");
		return;
	}
	struct Node *temp=*head;
	*head=temp->next;
	temp->next=NULL;
	printf("\n%d deleted\n",temp->data);
	free(temp);
	
}
void deletelast(struct Node **head){
	if(*head==NULL){
		printf("\nlinked list is empty,Nothing to delete\n");
		return;
	}
	if(((*head)->next==NULL) && ((*head)->prev=NULL)){
		printf("%d deleted",(*head)->data);
		*head=NULL;
		return;
	}
	struct Node *temp=*head,*pre=NULL;
	while(temp->next!=NULL){
		pre=temp;
		temp=temp->next;
	}
	printf("\n%d deleted\n",temp->data);
	pre->next=NULL;
	free(temp);
	
}
void deleteposition(int pos,struct Node **head){
	struct Node *temp=*head,*pre=NULL;
	int size=calsize(*head);
	if(pos<1 || pos>size){
		printf("\nInvalid position");
		return;
	}
	else if(pos==1){
		deletefirst(head);
		return;
	}
	while(--pos){
		pre=temp;
		temp=temp->next;
	}
	pre->next=temp->next;
	temp->next->prev=pre;
	printf("\n%d deleted",temp->data);
	free(temp);
	
	
}
void search(int key,struct Node *head){
	int position=1;
	int flag=0;
	while(head!=NULL){
		if(head->data==key){
			flag=1;
			break;
		}
		head=head->next;
		position++;
	}
	if(flag){
		printf("\n%d found at position %d",key,position);
	}
	else{
		printf("\nelement not found");
	}
}
int main(){
	struct Node *head=NULL;
	insertfirst(&head,50);
	insertfirst(&head,30);
	insertfirst(&head,20);
	insertfirst(&head,10);
	insertlast(&head,60);
	insertposition(2,&head,40);
	display(head);
	deleteposition(4,&head);
	search(30,head);
	display(head);
	deletefirst(&head);
	display(head);
	deletelast(&head);
	display(head);
	
	
}
