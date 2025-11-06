#include <stdio.h>
#include <stdlib.h>
#define MAX 100   // Maximum size of the queue

int queue[MAX];
int front = -1, rear = -1;

// Function to insert (enqueue) an element into the queue
void enqueue() {
    int value;
    if (rear == MAX - 1) {
        printf("\nQueue Overflow! Cannot insert more elements.\n");
    } else {
        printf("Enter value to enqueue: ");
        scanf("%d", &value);
        if (front == -1)  // If first element
            front = 0;
        rear++;
        queue[rear] = value;
        printf("Element %d inserted into the queue.\n", value);
    }
}

// Function to remove (dequeue) an element from the queue
void dequeue() {
    if (front == -1 || front > rear) {
        printf("\nQueue Underflow! No elements to delete.\n");
    } else {
        printf("Element %d deleted from the queue.\n", queue[front]);
        front++;
    }
}

// Function to display queue elements
void display() {
    if (front == -1 || front > rear) {
        printf("\nQueue is empty.\n");
    } else {
        printf("\nQueue elements are:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;

    printf("QUEUE IMPLEMENTATION USING ARRAY\n");

    while (1) {
        printf("\nMenu:\n");
        printf("1. Enqueue (Insert)\n");
        printf("2. Dequeue (Delete)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
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

