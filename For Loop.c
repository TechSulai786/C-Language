#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    printf("Enter the number:");
    scanf("%d",&j);
    for(i=1;i<=j;i=i+2)
    {
        printf("\n%d",i);
    }
    return 0;
}
