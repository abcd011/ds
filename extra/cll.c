// cll.c
#include <stdio.h>
#include <stdlib.h>

typedef struct CNode {
    int data;
    struct CNode *next;
} CNode;

CNode* createNode(int value) {
    CNode* n = (CNode*)malloc(sizeof(CNode));
    if (!n) { printf("Memory error\n"); exit(1); }
    n->data = value;
    n->next = NULL;
    return n;
}

// Insert at tail (maintain circularity)
void insertTail(CNode **head, int value) {
    CNode *n = createNode(value);
    if (*head == NULL) {
        *head = n;
        n->next = n; // points to itself
        return;
    }
    CNode *cur = *head;
    // find last node (whose next is head)
    while (cur->next != *head) cur = cur->next;
    cur->next = n;
    n->next = *head;
}

// Display list (stop when we come back to head)
void display(CNode *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    CNode *cur = head;
    do {
        printf("%d -> ", cur->data);
        cur = cur->next;
    } while (cur != head);
    printf("(back to head)\n");
}

// Free circular list
void freeList(CNode *head) {
    if (head == NULL) return;
    CNode *cur = head->next;
    while (cur != head) {
        CNode *tmp = cur;
        cur = cur->next;
        free(tmp);
    }
    free(head);
}

int main() {
    CNode *head = NULL;
    int n, val, i;
    printf("How many nodes? ");
    if (scanf("%d", &n) != 1) return 0;
    for (i = 0; i < n; i++) {
        printf("Enter value %d: ", i+1);
        scanf("%d", &val);
        insertTail(&head, val);
    }
    printf("Circular Linked List:\n");
    display(head);
    freeList(head);
    return 0;
}
























































// 3. Circular Linked List (CLL)
// Aim:
// To generate and display a Circular Linked List.

// Theory:
// In a CLL, the last node points to the first node, making a circular structure.
// It allows continuous traversal.

// Algorithm:
// Start.

// Define a node with data and next.

// Initialize head = NULL.

// For each insertion:

// Create a new node.

// If list empty, make it head and point next to itself.

// Else traverse to last node (where next == head), insert new node before head, and update next links.

// Traverse from head and print until you reach head again.

// Stop.