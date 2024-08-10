#include <stdio.h>

// Function prototypes
void swap(int *a, int *b);

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d",  a);
    
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Before swapping: \n");
    printf("Number 1 = %d\n", a);
    printf("Number 2 = %d\n", b);
    
    // Swap the numbers
    swap( a, &b);
    
    // Print numbers after swapping
    printf("After swapping: \n");
    printf("Number 1 = %d\n", a);
    printf("Number 2 = %d\n", b);
    
    return 0;
}

// Function to swap two numbers
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
