// tree_traversals.c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Build tree recursively
struct Node* createTree() {
    int value;
    printf("Enter data (-1 for no node): ");
    scanf("%d", &value);
    if (value == -1) return NULL;

    struct Node* root = createNode(value);
    printf("Enter left child of %d\n", value);
    root->left = createTree();
    printf("Enter right child of %d\n", value);
    root->right = createTree();
    return root;
}

// Traversals
void inorder(struct Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void preorder(struct Node* root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main() {
    struct Node* root = NULL;
    printf("Create the binary tree:\n");
    root = createTree();

    printf("\nInorder Traversal: ");
    inorder(root);

    printf("\nPreorder Traversal: ");
    preorder(root);

    printf("\nPostorder Traversal: ");
    postorder(root);

    printf("\n");
    return 0;
}



































































// Binary Search
// Aim:
// To implement Binary Search on a sorted array.

// Theory:
// Binary search divides the array into halves repeatedly to locate the target efficiently.
// There are three standard Depth-First Traversals:

// Inorder (Left, Root, Right) → For BST, gives sorted output.

// Preorder (Root, Left, Right) → Used to copy tree or get prefix expression.

// Postorder (Left, Right, Root) → Used to delete tree or get postfix expression.


// Algorithm:
// Start.

// Input sorted array and key.

// Set low = 0, high = n-1.

// While low <= high:

// mid = (low + high)/2.

// If a[mid] == key, found.

// Else if key < a[mid], high = mid - 1.

// Else low = mid + 1.

// If not found, display message.

// Stop.