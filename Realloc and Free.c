#include <stdio.h>
#include <stdlib.h> // use stdlib.h header file to malloc() function
int main ()
{
    int n;
    // printf("Enter the Variable size:");
    // scanf("%d",&n);
    int *ptr=malloc(3*sizeof(int));

    printf("Total memory Bytes: %d",3*sizeof(int));

    if(ptr==NULL)
    {
        printf("\nMemory is not available:");
    }
    else
    {
        printf("\nMemory is Available:");
    }
    for(int i=0; i<3; i++)
    {
        printf("\nEnter the Integer:");
        scanf("%d",ptr+i);
    }
    ptr=realloc(ptr,5*sizeof(int));
    for(int i=3; i<5; i++)
    {
        printf("\nEnter the Integer:");
        scanf("%d",ptr+i);
    }

    for(int i=0; i<5; i++)
    {
        printf("\nAddress : %d and Value : %d ",&ptr+i,*(ptr+i));
    }
    free(ptr);   // free function
    ptr=NULL;



    return 0;
}
