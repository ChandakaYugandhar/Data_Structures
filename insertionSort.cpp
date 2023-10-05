#include<stdio.h>
void display(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	
	
}
//void swap(int a,int b){
//	int temp;
//	temp=a;
//	a=b;
//	b=temp;
//}
void insertionSort(int arr[],int n){
	int key;
	for(int i=1;i<n;i++){
		key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	
}
int main(){
	int arr[]={4,3,8,2,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("Before Sorting:\n");
	display(arr,size);
	insertionSort(arr,size);
	printf("After Sorting:\n");
	display(arr,size);
}

