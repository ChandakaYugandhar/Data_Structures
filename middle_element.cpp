#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
}*head;
void display(struct Node *node){
	if (!node) printf("null");
	while(node!=NULL){
		printf("%d",node->data);
		node=node->next;
		printf(" ");
	}
}
void insert(struct Node **head,int data){
	struct Node *newnode=(struct Node *) malloc(sizeof(struct Node));
    newnode->data=data;
	newnode->next=NULL;
	if(*head==NULL){
		*head=newnode;
		return;
	}
	
	struct Node *temp=*head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newnode;
}
void middle_element(struct Node *node){
	struct Node *first=node;
	struct Node *second=node;
	if(node!=NULL){
		while(second!=NULL && second->next!=NULL){
		second=second->next->next;
		first=first->next;
		}
		printf("\nmiddle element is %d",first->data);
	}
	
}
int main(){
	struct Node *head=NULL;
	insert(&head,80);
	insert(&head,15);
	insert(&head,31);
	insert(&head,44);
	insert(&head,92);
	display(head);
	middle_element(head);
	return 0;
	
}
