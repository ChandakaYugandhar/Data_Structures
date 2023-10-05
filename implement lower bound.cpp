#include<stdio.h>
int main(){
	int arr[10];
	printf("enter the no of elements:\n");
	int n;
	scanf("%d",&n);
	printf("\n enter the elements in ascending order:");
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n enter a number:");
	int num;
	scanf("%d",&num);
	if(num==0){
		printf("%d",num);
	}
	else{
		int count=0;
		for(i=0;i<n;i++){
			if(arr[i]<num){
				count+=1;
				
			}
		}
		printf("%d",count);
	}
	
	}
	

