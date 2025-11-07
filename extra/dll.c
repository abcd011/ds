#include <stdio.h>
#include <stdlib.h>

typedef struct DNode {
    int data;
    struct DNode *prev;
    struct DNode *next;
} DNode;

DNode* createNode(int value) {
    DNode* n = (DNode*)malloc(sizeof(DNode));
    if (!n) { printf("Memory error\n"); exit(1); }
    n->data = value;
    n->prev = n->next = NULL;
    return n;
}

// Insert at tail
void insertTail(DNode **head, int value) {
    DNode *n = createNode(value);
    if (*head == NULL) {
        *head = n;
        return;
    }
    DNode *cur = *head;
    while (cur->next != NULL) cur = cur->next;
    cur->next = n;
    n->prev = cur;
}

// Display forward
void displayForward(DNode *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    DNode *cur = head;
    while (cur != NULL) {
        printf("%d <-> ", cur->data);
        cur = cur->next;
    }
    printf("NULL\n");
}

// Display backward (for demonstration)
void displayBackward(DNode *head) {
    if (head == NULL) { printf("List is empty\n"); return; }
    DNode *cur = head;
    while (cur->next != NULL) cur = cur->next;
    while (cur != NULL) {
        printf("%d <-> ", cur->data);
        cur = cur->prev;
    }
    printf("NULL\n");
}

void freeList(DNode *head) {
    DNode *cur;
    while (head != NULL) {
        cur = head;
        head = head->next;
        free(cur);
    }
}

int main() {
    DNode *head = NULL;
    int n, val, i;
    printf("How many nodes? ");
    if (scanf("%d", &n) != 1) return 0;
    for (i = 0; i < n; i++) {
        printf("Enter value %d: ", i+1);
        scanf("%d", &val);
        insertTail(&head, val);
    }
    printf("Doubly Linked List (forward):\n");
    displayForward(head);
    printf("Doubly Linked List (backward):\n");
    displayBackward(head);
    freeList(head);
    return 0;
}















































// Doubly Linked List (DLL)
// Aim:
// To generate and display a Doubly Linked List.

// Theory:
// Each node in a DLL has three fields: prev, data, and next.
// It allows traversal in both directions.

// Algorithm:
// Start.

// Define a struct DNode with data, prev, and next.

// Initialize head = NULL.

// For each element:

// Create a new node.

// If list empty, assign it as head.

// Else traverse to last node, link next of last node to new node and prev of new node to last node.

// Traverse and print the list forward and backward.

// Stop.