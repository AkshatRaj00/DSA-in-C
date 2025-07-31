#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;

};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;

    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size -1)
    {
        return 1;
    }
    else
    {
        return 0;

    }
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // Example usage
    if (isEmpty(s))
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack is not empty.\n");
    }

    if (isFull(s))
    {
        printf("Stack is full.\n");
    }
    else
    {
        printf("Stack is not full.\n");
    }

    // Free allocated memory
    free(s->arr);
    free(s);

    return 0;
}