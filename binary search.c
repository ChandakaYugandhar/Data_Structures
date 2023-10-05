#include<stdio.h>

int BinarySearch(int arr[],int left,int right,int item){
	while(left<=right){
		int mid=left+(right-left)/2;
		if(arr[mid]==item){
			return mid;
		}
		if(arr[mid]>item){
			return right=mid-1;
		}
		else{
			return left=mid+1;
		}
			
		}
	return -1;
	}
void display(int arr[],int n){
	int i=0;
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	printf(" ");
	}
	
}
int main(){
	int arr[10],n,i,left,right,item;
	printf("\n enter the number of elements:");
	scanf("%d",&n);
	printf("\n enter the elements into the array:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	display(arr,n);
	printf("\n enter the element to be search:");
	scanf("%d",&item);
	int element=BinarySearch(arr,0,n,item);
	if(element=-1){
		printf("\n item not found");
	}
	else{
	    printf("\n %d found at index %d",item,element);
	}
}
