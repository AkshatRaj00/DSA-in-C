#include<stdio.h>
#include<stdlib.h>

struct MyArray
{
    int total_size;
    // total_size is the maximum size of the array
    int used_size;
    int *ptr;

};

void createArray(struct MyArray *a, int tsize , int usize)

    //(*a).total_size = tsize;
    //(*a). total_size = usize;
    //(*a). ptr(int *)malloc(tsize* size of (int));

    a->total_size = tsize;
    a->used_size - usize;
    a->ptr = (int *)malloc(tsize * sizeof (int));
    
    void show(struct myArray *a)
    {
        for(int i=0; i<a->used_size; i++)
        {
            printf("%d\n",(a->ptr)[i]);
        }
    }


    void setVal(struct MyArrray *a)
    {
        int n;
        for(int i=0; i<a->used_size; i++)
        {
            printf("Enter element %d",i);
            scanf("%d",&n);
            (a->ptr)[i]=n;
        
        }
    }
int main() 
{
    struct MyArray marks;
    create Array(&marks,10,20);
    printf("we are running setval now\n");
    setval(&marks);

    printf("weare running show now \n");
    show(&marks);

    return 0;

}