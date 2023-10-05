#include<stdio.h>
void display(int arr[], int n){
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}

void merge(int arr[],int low, int mid, int high){
	int i=low,j=mid+1,index=low,p,temp[7];
	while(i<=mid && j<=high){
		if(arr[i]<arr[j]){
			temp[index]=arr[i];
			i++;
		}
		else{
			temp[index]=arr[j];
			j++;
		}
		
		index++;
	}
	
	if(i>mid){
		while(j<=high){
			temp[index]=arr[j];
			index++;
			j++;
		}
	}
	else{
	    while(i<=mid){
		    temp[index]=arr[i];
			index++;
			i++;
			}
	}
	for(p=low;p<index;p++){
	    arr[p]=temp[p];
	}
}
void mergeSort(int arr[],int low,int high){
	if(low<high){
		int mid=(low+high)/2;
		mergeSort(arr,low,mid);
		mergeSort(arr,mid+1,high);
		merge(arr,low,mid,high);
		
	}
	
}
int main(){
	int arr[]={4,1,3,2,9,7,8};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("Before Sorting:\n");
	display(arr,size);
	printf("After Sorting:\n");
    mergeSort(arr,0,size-1);
    display(arr,size);
}
