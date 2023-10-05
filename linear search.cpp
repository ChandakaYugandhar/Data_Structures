

#include<stdio.h>
int LinearSearch(int arr[], int len, int item){
	for(int i=0;i<len;i++){
		if(arr[i]==item){
			return i;
		}

		}
	
	}

void display(int arr[], int len){
	int i;
	for(i=0;i<len;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}
int main(){
	int arr[10],item,i,n;
	printf("no.of elements:");
	scanf("%d",&n);
	printf("\n enter the elements into the array:");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("\n enter the item to be search:");
	scanf("%d",&item);
	display(arr,n);
	int search=LinearSearch(arr,n,item);
	if(search){
	   printf("%d found at index %d",item,search);
	}
	else{
	   printf("item not found\n");
		
	}
	


}
