#include <stdio.h>
#include <stdlib.h> // use stdlib.h header file to malloc() function
int main ()
{
    int n;
    printf("Enter the Variable size:");
    scanf("%d",&n);
    int *ptr=malloc(n*sizeof(int));

    printf("Total memory Bytes: %d",n*sizeof(int));

    if(ptr==NULL)
    {
        printf("\nMemory is not available:");
    }
    else
    {
        printf("\nMemory is Available:");
    }
    for(int i=0; i<n; i++)
    {
        printf("\nEnter the Integer:");
        scanf("%d",ptr+i);
    }

    for(int i=0; i<n; i++)
    {
        printf("\nAddress : %d and Value : %d ",&ptr+i,*(ptr+i));
    }




    return 0;
}
