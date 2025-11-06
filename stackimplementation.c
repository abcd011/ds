#include <stdio.h>
#include <stdlib.h>
#define MAX 100   // Maximum size of the stack

int stack[MAX];
int top = -1;    // Stack initially empty

// Function to push element into stack
void push() {
    int value;
    if (top == MAX - 1) {
        printf("\nStack Overflow! Cannot push more elements.\n");
    } else {
        printf("Enter value to push: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("Element %d pushed onto the stack.\n", value);
    }
}

// Function to pop element from stack
void pop() {
    if (top == -1) {
        printf("\nStack Underflow! No elements to pop.\n");
    } else {
        printf("Element %d popped from the stack.\n", stack[top]);
        top--;
    }
}

// Function to display stack elements
void display() {
    if (top == -1) {
        printf("\nStack is empty.\n");
    } else {
        printf("\nStack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice;

    printf("STACK IMPLEMENTATION USING ARRAY\n");

    while (1) {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

