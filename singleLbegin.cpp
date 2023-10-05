#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
void display(struct Node *node){
	if(node==NULL){
		printf("Linked List is empty\n");
		return;
	}
	
	printf("\nLinked list:\n");
	while(node!=NULL){
		printf("%d",node->data);
		node=node->next;
		printf(" ");
	}
	
	
}
void insertFirst(struct Node **head,int data){
	struct Node *newNode=(struct Node *) malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=*head;
	*head=newNode;
}
void insertLast(struct Node **head,int data){
	struct Node *newNode=(struct Node *) malloc(sizeof(struct Node));
	struct Node *temp=*head;
	newNode->data=data;
	newNode->next=NULL;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
}
int calSize(struct Node *head){
	int size=0;
	while(head!=NULL){
		head=head->next;
		size++;
	}
	return size;
}
void insertPosition(int pos,struct Node **head,int data){
	struct Node *temp=*head,*prev=NULL;
	int size=calSize(*head);
	if(pos<1 || pos>size){
		printf("\n invalid position");
	}
	else{
		while(--pos){
			prev=temp;
			temp=temp->next;
		}
	struct Node *newNode=(struct Node *) malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=prev->next;
	prev->next=newNode;
	
	}
	
}
void deleteFirst(struct Node **head){
	struct Node *temp=*head;
	if(*head==NULL){
		printf("\nLinked List is empty, Nothing to delete\n");
		return;
	}
	*head=(*head)->next;
	printf("\n%d deleted",temp->data);
	free(temp);
}
void deletebefore(int pos,struct Node **head){
	struct Node *temp=*head;
	struct Node *prev;
	int size=calSize(*head);
	if(*head==NULL){
		printf("\nLinked List is empty,Nothing to delete");
		return;
	}
	if(pos<1 ||pos>size){
		printf("\nInvalid position");
		return;
	}
	while(--pos){
		prev=temp;
		temp=temp->next;
	}
	prev->next=temp->next;
	printf("\n%d deleted",temp->data);
	free(temp);
	
}
void deleteLast(struct Node **head){
	struct Node *temp=*head;
	struct Node *prev;
	if(*head==NULL){
		printf("\n LinkedList is empty, Nothing to delete");
		return;
	}
	if(temp->next==NULL){
		printf("\n%d deleted",temp->data);
		*head=NULL;
		return;
	}
	while(temp->next!=NULL){
		prev=temp;
		temp=temp->next;
	}
	prev->next=NULL;
	printf("\n%d deleted",temp->data);
	free(temp);
}
void search(struct Node *node,int key){
	int position=1;
	int flag=0;
	while(node!=NULL){
		if(node->data==key){
			flag=1;
			break;
		}
		node=node->next;
		position++;
	}
	if(flag){
		printf("\n%d found at position %d",key,position);
	}
	else{
		printf("\n element not found");
	}
	
}
int main(){
	struct Node *head=NULL;
	display(head);
	insertFirst(&head,40);
	insertFirst(&head,30);
	insertFirst(&head,20);
	insertFirst(&head,10);
	display(head);
	insertFirst(&head,70);
	display(head);
	search(head,70);
	deleteFirst(&head);
	display(head);
	insertLast(&head,70);
	display(head);
	insertPosition(4,&head,50);
	display(head);
	deleteLast(&head);
    deletebefore(2,&head);
	display(head);
  
}
