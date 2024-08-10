#include <stdio.h>
#include <stdlib.h>

int main() {
    int stack[5];  // Stack array with a fixed size of 5
    int top = -1;
    int choice, value;

    // Function to push an element onto the stack
    void push(int value) {
        if (top == 4) {  // The size of the stack is hardcoded to 5
            printf("Stack Overflow! Cannot push %d\n", value);
        } else {
            top++;
            stack[top] = value;
            printf("%d pushed onto the stack\n", value);
        }
    }

    // Function to pop an element from the stack
    int pop() {
        if (top == -1) {
            printf("Stack Underflow! Cannot pop\n");
            return -1;
        } else {
            int poppedValue = stack[top];
            top--;
            printf("%d popped from the stack\n", poppedValue);
            return poppedValue;
        }
    }

    // Function to peek the top element of the stack
    int peek() {
        if (top == -1) {
            printf("Stack is empty\n");
            return -1;
        } else {
            printf("Top element is %d\n", stack[top]);
            return stack[top];
        }
    }

    // Function to display the stack elements
    void display() {
        if (top == -1) {
            printf("Stack is empty\n");
        } else {
            printf("Stack elements are:\n");
            for (int i = top; i >= 0; i--) {
                printf("%d\n", stack[i]);
            }
        }
    }

    // Menu-driven loop for stack operations
    while (1) {
        printf("\n--- Stack Operations ---\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
