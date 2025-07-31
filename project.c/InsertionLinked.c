#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1: Insert a new node at the beginning of the linked list
struct Node *insertAtFirst(struct Node *head, int data) {
    // 1. Allocate memory for the new node
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));

    // 2. Set the data for the new node
    ptr->data = data;

    // 3. Make the new node point to the current head
    ptr->next = head;

    // 4. Return the new node as the new head of the list
    return ptr;
}

int main() {
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 45;
    third->next = fourth;

    // Terminate the list at the fourth node
    fourth->data = 66;
    fourth->next = NULL;

    printf("Linked List before insertion:\n");
    linkedListTraversal(head);

    // Insert a new node with data 56 at the beginning
    head = insertAtFirst(head, 56);

    printf("\nLinked List after insertion at the first position:\n");
    linkedListTraversal(head);

    // Free allocated memory to prevent memory leaks
    free(head);
    free(second);
    free(third);
    free(fourth);
    
    return 0;
}