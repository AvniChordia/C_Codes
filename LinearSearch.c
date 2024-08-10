#include<stdio.h>
void main(){
int arr[]={10,1,8,7,90,80};
int key,index=-1;
printf("Enter key : ");
scanf("%d",&key);
int len = sizeof(arr)/sizeof(arr[0]);
for (int i=0;i<len;i++){
    if(arr[i]==key){
        index=i;
        break;
    }
}
if(index==-1){
    printf("Not Found");
}
else{
    printf("Element %d found at index %d \n",key,index);
    printf("Element %d found at position %d",key,index+1);
}
}