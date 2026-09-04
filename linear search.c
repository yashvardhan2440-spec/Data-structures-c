#include<stdio.h>
#include<conio.h>

int main(){

int arr[5]={2,3,21,4,5};
int key,found=0;

printf("enter element to search:");
scanf("%d",&key);

for(int i=0;i<5;i++){
    if(key==arr[i]){
        printf("element found at index: %d",i);
        found=1;
        break;
    }
}
if(found==0){
  printf("element not found");
}
}
