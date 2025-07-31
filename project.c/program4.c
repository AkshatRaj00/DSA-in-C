#include <stdio.h> // For printf
#include <stdlib.h> // For malloc and free (for dynamic memory allocation)

// Define the structure for a Node in a binary tree
struct Node {
    int value;         // Data held by the node
    struct Node *left; // Pointer to the left child node
    struct Node *right; // Pointer to the right child node
};

// Function to create a new Node
struct Node* createNode(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1); // Exit if memory allocation fails
    }
    newNode->value = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Recursive function to calculate the sum of all node values in a binary tree
int sum(struct Node *node) { // 'node' is a pointer to a Node
    // Base Case: If the current node is NULL (i.e., we've gone past a leaf or started with an empty tree)
    if (node == NULL) {
        return 0; // The sum contributed by an empty subtree is 0
    }
    // Recursive Step:
    // Sum of the left subtree + current node's value + sum of the right subtree
    return sum(node->left) + node->value + sum(node->right);
}

// Function to free the memory allocated for the tree (post-order traversal)
void freeTree(struct Node* node) {
    if (node == NULL) {
        return;
    }
    freeTree(node->left);
    freeTree(node->right);
    free(node);
}

// Main function to demonstrate the sum function
int main() {
    // Constructing a sample binary tree:
    //        10
    //       /  \
    //      5    15
    //     / \   /
    //    2   7 12

    struct Node *root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(15);
    root->left->left = createNode(2);
    root->left->right = createNode(7);
    root->right->left = createNode(12);

    // Calculate the sum of all nodes
    int totalSum = sum(root);

    // Print the result
    printf("The sum of all node values in the tree is: %d\n", totalSum);

    // Free the allocated memory
    freeTree(root);

    return 0; // Indicate successful execution
}