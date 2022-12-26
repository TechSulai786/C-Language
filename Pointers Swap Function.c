#include<stdio.h>
#include<conio.h>

void swap(int *,int *);

int main()
{
    int a=5;
    int b=6;
    swap(&a,&b);
    printf("A is = %d\nB is = %d",a,b);
    return 0;
}

void swap(int *p1,int *p2)
{
    int i;
    i=*p1;
    *p1=*p2;
  *p2=i;

}
