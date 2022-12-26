#include<stdio.h>
#include<conio.h>
int main()
{
    int a,max;
    printf("\nEnter the Number:");
    scanf("%d",&a);

    max=(a<0) ? printf("this is negtive") : printf("this is positive");
    return 0;
}
