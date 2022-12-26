#include<stdio.h>
#include<conio.h>

int arraysum(int []);
int main()
{
    int a[5],sum;
    printf("enter the number:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    sum=arraysum(a);
    printf("Addition of array is:%d",sum);
}

int arraysum(int a[])
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
     sum=sum+a[i];
    }
    return sum;
}
