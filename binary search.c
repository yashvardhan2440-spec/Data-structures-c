#include<stdio.h>
#include<conio.h>

int main(){

int arr[5]={2,3,4,5,7};
int key,n=5;
int low=0,high=n-1,mid;
int found=0;

printf("enter element to search:");
scanf("%d",&key);

while(low<=high){
    mid=(low+high)/2;
    
    if(key==arr[mid]){
        printf("element found at index: %d",mid);
        found=1;
        break;
    }else if(key<arr[mid])
    {
        high=mid-1;
    }else
    {
        low=mid+1;
    }

}
if(found==0){
  printf("element not found");
}
}

