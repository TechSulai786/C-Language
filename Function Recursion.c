#include<stdio.h>
#include<conio.h>
int fact(int );
int main()
{

    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("factorial is%d",fact(n));

    return 0;
}

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
