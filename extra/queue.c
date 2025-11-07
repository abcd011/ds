// queue_circular.c
#include <stdio.h>
#include <stdlib.h>

#define MAXQ 50

int queue[MAXQ];
int front = -1, rear = -1;

int isFull() {
    return (front == (rear + 1) % MAXQ);
}

int isEmpty() {
    return (front == -1);
}

void enqueue(int x) {
    if (isFull()) {
        printf("Queue Overflow\n");
        return;
    }
    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % MAXQ;
    }
    queue[rear] = x;
    printf("%d enqueued\n", x);
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow\n");
        return;
    }
    int val = queue[front];
    if (front == rear) { // single element
        front = rear = -1;
    } else {
        front = (front + 1) % MAXQ;
    }
    printf("Dequeued: %d\n", val);
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue (front -> rear): ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear) break;
        i = (i + 1) % MAXQ;
    }
    printf("\n");
}

int main() {
    int choice, x;
    while (1) {
        printf("\n1.Enqueue 2.Dequeue 3.Display 4.Exit\nChoose: ");
        if (scanf("%d", &choice) != 1) return 0;
        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &x);
                enqueue(x);
                break;
            case 2:
                dequeue();
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





















































// 5. Queue using Array
// Aim:
// To implement Queue operations (Enqueue, Dequeue, Display) using an array.

// Theory:
// A Queue is a FIFO (First In, First Out) structure where elements are inserted at the rear and removed from the front.
// Operations:

// Enqueue: Insert element at rear.

// Dequeue: Remove element from front.

// Display: Print all elements.

// Algorithm:
// Start.

// Initialize front = -1, rear = -1.

// Enqueue(x):

// If full, display overflow.

// Else if empty, set front = rear = 0.

// Else increment rear and insert x.

// Dequeue():

// If empty, underflow.

// Else remove element from front and increment it.

// If front > rear, reset both to -1.

// Display(): Traverse from front to rear.

// Stop.