#include<stdio.h>
#include<conio.h>

void point(int *);

int main()
{
    int a=9;
    point(&a);
    printf("%d",a);
    return 0;
}

void point(int *p)
{
    (*p)++;
}
