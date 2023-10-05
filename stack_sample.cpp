#include<stdio.h>
#include<stdlib.h>
int top=-1;
int size=10;
void push(int arr[],int data){
	if(top==size-1) printf("\nwill not be pushe stack is full");
	else{
		++top;
		arr[top]=data;
		printf("\n%d is pushed into stack",data);
	}
}
void pop(int arr[]){
	if(top==-1) printf("\nstack is empty");
	else{
		
		printf("\n%d id poped form stack",arr[top]);
		top--;
	}
	printf("\n");
	
}
void peek(int arr[]){
	if(top==-1) printf("\nstack is empty");
	else{
		printf("\ntop item is %d",arr[top]);
	}
}
void isempty(int arr[]){
	if(top==-1){
		printf("\ntrue");
	}
	else{
		printf("\nflase");
	}
}
void display(int arr[]){
	int i=0;
	printf("\nRemaining elements in the stack:");
	while(i<=top){
		printf("\n%d",arr[i]);
		i++;
	}
	printf("\n");
}
int main(){
	int arr[10];
	push(arr,10);
	push(arr,20);
	push(arr,30);
	display(arr);
	pop(arr);
	display(arr);
	pop(arr);
	display(arr);
	peek(arr);
	pop(arr);
	pop(arr);
	isempty(arr);
}

