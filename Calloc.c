#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the limits:");
    scanf("%d",&n);
    int *ptr=(int *)calloc(n,sizeof(int));
    printf("\n %d %d",(n,sizeof(int)));

if(ptr==NULL)
{
    printf("\nmemory is not Available:");
}
   else
   {
       printf("\nMemory is Available:");
   }
   for(int i=0;i<n;i++)
   {
       printf("\nEnter the integer:");
       scanf("%d",ptr+i);
   }

   for (int i=0;i<n;i++)
   {
       printf("\nAddress : %d and Value : %d ",&ptr+i,*(ptr+i));
   }

     return 0;

}
