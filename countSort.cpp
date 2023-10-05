#include<stdio.h>
void display(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}
void countSort(int arr[],int n){
	int max=arr[0];
	int count[5]={0};
	int out[4];
	for(int i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
//	for(int i=0;i<=max;i++){
//	    count[i]=0;
//	}
	for(int i=0;i<n;i++){
		count[arr[i]]++;
	}
	for(int i=1;i<=max;i++){
		count[i]+=count[i-1];
	}
	for(int i=n-1;i>=0;i--){
		out[count[arr[i]]-1]=arr[i];
		count[arr[i]]--;
	}
	for(int i=0;i<n;i++){
		arr[i]=out[i];
	}
}
int main(){
	int arr[]={4,3,2,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("\nBefore sorting:");
	display(arr,size);
	countSort(arr,size);
	printf("\nAfter sorting:");
	display(arr,size);
	
}
