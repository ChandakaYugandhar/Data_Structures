#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct Stack{
	int top;
	int maxsize;
	int *arr;
};
struct Stack *create(int max){
	struct Stack *stack=(struct Stack *) malloc(sizeof(struct Stack));
	stack->top=-1;
	stack->maxsize=max;
	stack-> arr=(int *) malloc(stack->maxsize *(sizeof(int)));
	return stack;
}
int isFull(struct Stack *stack){
	if(stack->top==stack->maxsize-1){
		return 1;
	}
	else{
		return 0;
	}
}
int isempty(struct Stack *stack){
	if(stack->top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
int top(struct Stack *stack){
	if(isempty(stack)){
		printf("\nstack is empty");
	}
	else{
		return stack->arr[stack->top];
	}
}
void push(struct Stack *stack,int data){
	if(isFull(stack)){
		printf("\nstack is full");
	}
	else{
		stack->arr[++stack->top]=data;
		printf("\nwe have pushed %d to stack",data);
	}
}
void pop(struct Stack *stack){
	if(isempty(stack)){
		printf("\nstack is empty");
	}
	else{
		printf("\n\nwe have poped %d from stack",stack->arr[stack->top]);
		stack->top--;
	}
}
void display(struct Stack *stack){
	int i=stack->top;
	printf("\nItem in the stack:\n");
	while(i>=0){
		printf("\n");
		printf("\n| %d |",stack->arr[i]);
		i--;
	    printf("\n|____|");
	}
	
	
}
int main(){
	struct Stack *stack=create(10);
	push(stack,10);
	push(stack,20);
	push(stack,30);
	display(stack);
	pop(stack);
	display(stack);
}
