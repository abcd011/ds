// stack_array.c
#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int stack[MAX];
int top = -1;

void push(int x) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = x;
    printf("%d pushed\n", x);
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    printf("Popped: %d\n", stack[top--]);
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack (top -> bottom): ");
    for (int i = top; i >= 0; i--) printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    int choice, x;
    while (1) {
        printf("\n1.Push  2.Pop  3.Display  4.Exit\nChoose: ");
        if (scanf("%d", &choice) != 1) return 0;
        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &x);
                push(x);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exit\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}



































































// Aim:
// To implement Stack operations (Push, Pop, Display) using an array.

// Theory:
// A Stack is a LIFO (Last In, First Out) structure where insertion and deletion occur at one end (top).

// Algorithm:
// Start.

// Initialize top = -1.

// Push(x):

// If top == MAX-1, Stack Overflow.

// Else, increment top and set stack[top] = x.

// Pop():

// If top == -1, Stack Underflow.

// Else, display stack[top] and decrement top.

// Display():

// Traverse stack from top to 0.

// Stop.