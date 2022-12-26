#include<stdio.h>
#include<conio.h>
int add(int a,int b);
int add(int a,int b)
{
    int z=a+b;
    return z;
}


int main ()
{
    int a,b,c;
    int (*p)(int,int);
    p=&add;
    printf("%d",p(10,40));
    return 0;
}

