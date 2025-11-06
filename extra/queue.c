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
