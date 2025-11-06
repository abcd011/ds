//DOUBLY LINKED LIST GENERATION AND DISPLAY
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

int main() {
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    int n, i, value;

    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));

        if (newNode == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        printf("Enter data for node %d: ", i);
        scanf("%d", &value);

        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }

    // Display list in forward direction
    printf("\nDoubly Linked List in forward direction:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        if (temp->next == NULL) break; // store last node for reverse printing
        temp = temp->next;
    }
    printf("NULL\n");

    // Display list in backward direction
    printf("\nDoubly Linked List in backward direction:\n");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");

    return 0;
}
