#include<stdio.h>
void display(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}
void swap(int *var1,int *var2){
	int temp=*var1;
	*var1=*var2;
	*var2=temp;
}
void selectionSort(int arr[],int n){
	int minindex;
	for(int i=0;i<n-1;i++){
		minindex=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[minindex]){
				minindex=j;
			}
		}
		swap(&arr[minindex],&arr[i]);
	}
	
}
int main(){
	int arr[]={4,1,3,2,7,9,8};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("Before Sorting:\n");
	display(arr,size);
	printf("After Sorting:\n");
	selectionSort(arr,size);
	display(arr,size);
}
