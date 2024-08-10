// #include<stdio.h>
// void main(){
//     int b[4]= {10,20,30,40};
//     for(int i=0;i<4;i++){
//         printf("%d ",b[i]);
//     }
//     printf("\n");
//     int a[4];
//     a[0] =40;
//     a[1] = 20;
//     a[3] = 34;
//     a[4] = 56;
//     for(int i=0;i<5;i++){
//         printf("%d",a[i]);
//     }
//     printf("\n");
//     int c[2][2] = {{10,20},{30,40}};
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             printf("%d  ",c[i][j]);
//         }
//         printf("\n");

//     }
// }


#include<stdio.h>

void main() {
    // 1D array b initialization and printing
    int b[4] = {10, 20, 30, 40};
    for (int i = 0; i < 4; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    // 1D array a initialization and printing
    int a[4];
    a[0] = 40;
    a[1] = 20;
    a[2] = 23 ;   // Initializing the third element to avoid garbage value
    a[3] = 34;

    // Correcting loop to iterate over valid array indices
    for (int i = 0; i < 4; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // 2D array c initialization and printing
    int c[2][2] = {{10, 20}, {30, 40}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d  ", c[i][j]);
        }
        printf("\n");
    }
}
