#include<stdio.h>
void main(){
int arr[]={1,2,3,4,5,6,7,8};
int key,index=-1,lb,ub;
printf("Enter key : ");
scanf("%d",&key);
int len = sizeof(arr)/sizeof(arr[0]);
lb=0;
ub=len;
int mid;
for(int i=0;i<len;i++){
    mid=(lb+ub)/2;
    if (key==arr[mid]){
        index=mid;
    }
    else if(key>arr[mid]){
        lb=mid+1;
        
    }
    else if(key<arr[mid]){
        ub=mid-1;
        
    }
    }
    if(index==-1){
        printf("nf");
    }
    else{
        printf("index=%d",mid);
    }

}