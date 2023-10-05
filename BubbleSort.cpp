#include<stdio.h>
int BubbleSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void display(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	printf(" ");
	}
	
}
int main(){
	int arr[10],n,i;
	printf("\n enter the no of elements:");
	scanf("%d",&n);
	printf("\n enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Before sorting:\n");
	display(arr,n);
	printf("\nAfter sorting:\n");
	BubbleSort(arr,n);
	display(arr,n);
	
}

