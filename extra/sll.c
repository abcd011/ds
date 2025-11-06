#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* createNode(int value) {
    Node* n = (Node*)malloc(sizeof(Node));
    if (!n) { printf("Memory error\n"); exit(1); }
    n->data = value;
    n->next = NULL;
    return n;
}

void insertTail(Node **head, int value) {
    Node *n = createNode(value);
    if (*head == NULL) {
        *head = n;
        return;
    }
    Node *cur = *head;
    while (cur->next != NULL) cur = cur->next;
    cur->next = n;
}

void display(Node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    Node *cur = head;
    while (cur != NULL) {
        printf("%d -> ", cur->data);
        cur = cur->next;
    }
    printf("NULL\n");
}

void freeList(Node *head) {
    Node *cur;
    while (head != NULL) {
        cur = head;
        head = head->next;
        free(cur);
    }
}

int main() {
    Node *head = NULL;
    int n, val, i;
    printf("How many nodes? ");
    if (scanf("%d", &n) != 1) return 0;
    for (i = 0; i < n; i++) {
        printf("Enter value %d: ", i+1);
        scanf("%d", &val);
        insertTail(&head, val);
    }
    printf("Singly Linked List:\n");
    display(head);
    freeList(head);
    return 0;
}
