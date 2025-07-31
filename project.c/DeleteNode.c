/*#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;

};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;

    }
}

// case 1: Deleting the first element of the linked list
struct Node * deleteFirst(struct Node * head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;

}




// case 2:Delete the element at a giaven index form the linked list
struct Node * deleteAtIndex(struct Node * head, int index ){
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;

}

// case 3; deleting the last element
struct Node * deleteAtLast(struct Node * head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}


// case 4: deleting the element with a given vlaue form the linked list
struct Node * deleteAtIndex(struct Node * head, int value ){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;

    }
    if(q->data == value){
        p->next = q->next;
        free(q);
    }

    return head;

}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the  linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    //link first and second nodes
    head->data =4;
    head->next = second;

    //link second and third nodes
    second->data = 3;
    second->next = third;

    //link third and fourth nodes
    third ->data = 8;
    third->next = fourth;


    //terminate the list at the fourth node
    fourth->data =1;
    fourth->next =NULL;

    printf("Linked list before deletion\n");
    linkedListTraversal(head);

    //
    // head = deleteFirst(head); // For deleting first element of the linked list
    // head = deleteAtIndex(head, 2);

    head = deleteAtLast(head);
    printf("Linked list after deletion\n");
    linkedListTraversal(head);

    return 0;

}*/

/*#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1: Deleting the first element from the linked list
struct Node * deleteFirst(struct Node * head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Case 2: Deleting the element at a given index from the linked list
struct Node * deleteAtIndex(struct Node * head, int index){
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = q->next;
    free(q);
    return head;
}

// Case 3: Deleting the last element
struct Node * deleteAtLast(struct Node * head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next !=NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = NULL;
    free(q);
    return head;
}


// Case 4: Deleting the element with a given value from the linked list
struct Node * deleteAtIndex(struct Node * head, int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 4;
    head->next = second;

    // Link second and third nodes
    second->data = 3;
    second->next = third;

    // Link third and fourth nodes
    third->data = 8;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = NULL;

    printf("Linked list before deletion\n");
    linkedListTraversal(head);

    // head = deleteFirst(head); // For deleting first element of the linked list
    // head = deleteAtIndex(head, 2);
    head = deleteAtLast(head);
    printf("Linked list after deletion\n");
    linkedListTraversal(head);

    return 0;
}*/ 


#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1: Deleting the first element from the linked list
struct Node * deleteFirst(struct Node * head){
    if (head == NULL) { // Handle empty list
        return NULL;
    }
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Case 2: Deleting the element at a given index from the linked list
// Returns the new head of the list
struct Node * deleteAtIndex(struct Node * head, int index){
    if (head == NULL) {
        printf("Cannot delete from an empty list.\n");
        return NULL;
    }

    if (index == 0) { // Deleting the first element
        return deleteFirst(head);
    }

    struct Node *p = head;
    struct Node *q = head->next;
    int i = 0;
    while (q != NULL && i < index - 1)
    {
        p = p->next;
        q = q->next;
        i++;
    }

    if (q == NULL) { // Index is out of bounds
        printf("Index out of bounds for deletion.\n");
        return head;
    }

    p->next = q->next;
    free(q);
    return head;
}

// Case 3: Deleting the last element
struct Node * deleteAtLast(struct Node * head){
    if (head == NULL) { // Handle empty list
        return NULL;
    }
    if (head->next == NULL) { // Only one node in the list
        free(head);
        return NULL;
    }

    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
}


// Case 4: Deleting the element with a given value from the linked list
// Returns the new head of the list
struct Node * deleteByValue(struct Node * head, int value){ // Renamed this function
    if (head == NULL) {
        printf("Cannot delete from an empty list.\n");
        return NULL;
    }

    // Special case: deleting the head node
    if (head->data == value) {
        struct Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct Node *p = head;
    struct Node *q = head->next;
    while(q != NULL && q->data != value)
    {
        p = p->next;
        q = q->next;
    }

    if(q != NULL){ // Value found
        p->next = q->next;
        free(q);
    } else {
        printf("Value %d not found in the list.\n", value);
    }
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 4;
    head->next = second;

    // Link second and third nodes
    second->data = 3;
    second->next = third;

    // Link third and fourth nodes
    third->data = 8;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = NULL;

    printf("Linked list before deletion\n");
    linkedListTraversal(head);
    printf("---\n");

    // Uncomment one of the following lines to test:

    // Testing deleteFirst
    // head = deleteFirst(head);

    // Testing deleteAtIndex
    // head = deleteAtIndex(head, 2); // Deletes element at index 2 (third element)
    // head = deleteAtIndex(head, 0); // Deletes the first element
    // head = deleteAtIndex(head, 5); // Index out of bounds example

    // Testing deleteAtLast
    // head = deleteAtLast(head);

    // Testing deleteByValue
    head = deleteByValue(head, 8); // Deletes the node with data 8
    // head = deleteByValue(head, 4); // Deletes the head node (data 4)
    // head = deleteByValue(head, 10); // Value not found example

    printf("Linked list after deletion\n");
    linkedListTraversal(head);

    // It's good practice to free all remaining allocated memory at the end
    // For simplicity, we are not doing a full list free here after operations,
    // but in a real application, you would traverse and free.

    return 0;
}

  