#include<stdio.h>
int main(){
	int arr[]={1,2,3,4};
	int temp=arr[0];
	int n=4;
	for (int i=0;i<n-1;i++){
		arr[i]=arr[i+1];
		
	}
	arr[n-1]=temp;
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
}
