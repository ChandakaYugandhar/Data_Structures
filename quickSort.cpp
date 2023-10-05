#include<stdio.h>
void display(int arr[], int n){
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
		printf(" ");
	}
	
	
}
void swap(int *var1,int *var2){
	int temp=*var1;
	*var1=*var2;
	*var2=temp;
}
int partition(int arr[],int low,int high){
	int pivot=arr[high];
	int swapIndex=(low-1);
	for(int j=low;j<high;j++){
		if(arr[j]<pivot){
			swapIndex++;
			swap(&arr[swapIndex],&arr[j]);
		}
	}
	swap(&arr[swapIndex+1],&arr[high]);
	return (swapIndex+1);
}
void quickSort(int arr[],int low,int high){
	if(low<high){
		int index=partition(arr,low,high);
		quickSort(arr,low,index-1);
		quickSort(arr,index+1,high);
	}
	
}
int main(){
	int arr[]={4,1,3,2,7,9,8};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("Before Sorting:\n");
	display(arr,size);
	printf("\nAfter Sorting:\n");
	quickSort(arr,0,size-1);
	display(arr,size);
}
