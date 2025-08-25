#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node in the binary tree
struct Node {
    int data;                 // Data stored in the node
    struct Node* left;        // Pointer to the left child
    struct Node* right;       // Pointer to the right child
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;    // Assign the value to the node
    newNode->left = NULL;     // Initialize left child as NULL
    newNode->right = NULL;    // Initialize right child as NULL
    return newNode;
}

// Function to build the binary tree
struct Node* buildTree() {
    int value;
    printf("Enter node value (-1 for no node): ");
    scanf("%d", &value);

    // If user enters -1, return NULL (no node)
    if (value == -1) {
        return NULL;
    }

    // Create the root node
    struct Node* root = createNode(value);

    // Recursively create the left and right children
    printf("Enter left child of %d:\n", value);
    root->left = buildTree();

    printf("Enter right child of %d:\n", value);
    root->right = buildTree();

    return root;
}

// Pre-order traversal function (Root -> Left -> Right)
void preOrder(struct Node* root) {
    if (root == NULL) {       // Base case: If the node is NULL, do nothing
        return;
    }

    // Visit the root node
    printf("%d ", root->data);

    // Traverse the left subtree
    preOrder(root->left);

    // Traverse the right subtree
    preOrder(root->right);
}

// Main function
int main() {
    printf("Build the binary tree:\n");
    struct Node* root = buildTree(); // Build the tree based on user input

    printf("Pre-order Traversal of the Tree: ");
    preOrder(root); // Perform pre-order traversal
    printf("\n");

    return 0;
}
