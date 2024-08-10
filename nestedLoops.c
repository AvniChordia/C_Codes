#include<stdio.h>
void main(){
    // int arr[2][2]= {{1,2},{3,4}};
    int arr[2][2];
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            //printf("%d %d",i,j);
            printf("Enter at element (%d %d)",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
   
    for(int i=0;i<=1;i++){
        printf("\n");
        for(int j=0;j<=1;j++){
            printf("%d ",arr[i][j]);
        }
    }
}