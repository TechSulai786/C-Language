#include<stdio.h>
#include<conio.h>
int main()
{
    int a=1;
    int *p=&a;
    int **p2=&p;
printf("this is a address:%d",&a);
    printf("\nThis is pointer memory value:%d",p);
    printf("\nThis is pointer memory value of a:%d",*p);
    printf("\nthis is pointer Address:%d",&p);
    printf("\n this is double pointer:%d",p2);
     printf("\n this is pointer memory value:%d",*p2);
      printf("\nthis is double pointer Address:%d",&p2);
     printf("\n this is double pointer memory value:%d",**p2);
    return 0;
}
