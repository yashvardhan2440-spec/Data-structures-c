#include<stdio.h>
#include<conio.h>
int linear_search(int arr[],int n,int key){
	int i;
	for(i=0;i<n;i++){
		if(arr[i] == key){
			return i;
		}
	}
	return -1;
}
int binary_search(int arr[],int n,int key){
	int low = 0;
	int high = n-1;
	int i;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid] == key){
			return mid;
		}
		else if(arr[mid] < key){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	return -1;
}
void main(){
	int arr[50],key,n;
	int i;
	clrscr();
	printf("Enter no. of elements");
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter a key");
	scanf("%d",&key);
	printf("%d",binary_search(arr,n,key));
	getch();
}

