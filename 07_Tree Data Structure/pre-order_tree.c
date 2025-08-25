#include <stdio.h>

// Define the structure of a node in the binary tree
struct Node {
    int data;                 // Data stored in the node
    struct Node *left;        // Pointer to the left child
    struct Node *right;       // Pointer to the right child
};

// Pre-order traversal function (Root -> Left -> Right)
void preOrder(struct Node *root) {
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

int main() {
    // Declare nodes statically
    struct Node node1 = {1, NULL, NULL};
    struct Node node2 = {2, NULL, NULL};
    struct Node node3 = {3, NULL, NULL};
    struct Node node4 = {4, NULL, NULL};
    struct Node node5 = {5, NULL, NULL};
    struct Node node6 = {6, NULL, NULL};
    struct Node node7 = {7, NULL, NULL};

    // Manually link the nodes to form the binary tree
    /*
          1
         / \
        2   3
       / \  / \
      4  5 6   7
    */
    node1.left = &node2;
    node1.right = &node3;
    node2.left = &node4;
    node2.right = &node5;
    node3.left = &node6;
    node3.right = &node7;

    // Perform pre-order traversal
    printf("Pre-order Traversal: ");
    preOrder(&node1);
    printf("\n");

    return 0;
}
