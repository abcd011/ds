// binary_tree.c
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
    if (!newNode) {
        printf("Memory allocation error!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Create tree recursively
struct Node* createTree() {
    int value;
    printf("Enter data (-1 for no node): ");
    scanf("%d", &value);

    if (value == -1) return NULL;  // base condition

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

// Free memory
void freeTree(struct Node* root) {
    if (root == NULL) return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

int main() {
    struct Node* root = NULL;
    printf("Create the binary tree:\n");
    root = createTree();

    printf("\nInorder traversal: ");
    inorder(root);

    printf("\nPreorder traversal: ");
    preorder(root);

    printf("\nPostorder traversal: ");
    postorder(root);

    printf("\n");
    freeTree(root);
    return 0;
}





















































// Binary Tree Creation and Display
// Aim:
// To generate and display a Binary Tree.

// Theory:
// A binary tree is a hierarchical structure where each node has at most two children — left and right.
// It is created using recursion.
// Types of Binary Trees:

// Full Binary Tree: Every node has 0 or 2 children.

// Complete Binary Tree: All levels except possibly the last are filled.

// Binary Search Tree (BST): Left < Root < Right.

// Algorithm:
// Start.

// Define a structure with data, left, right.

// Create a function createTree():

// Input data; if -1, return NULL.

// Create node using malloc().

// Recursively call createTree() for left and right subtrees.

// Display tree using traversals (inorder, preorder, postorder).

// Stop.