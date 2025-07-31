#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;

};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr !=NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;

    }
}

// case 1:

struct Node * insertAtFirst
(struct Node * )