#include<stdio.h>
#include<conio.h>
int main()
{
    int a=9,c;
   int *p=&a;
   char ch='s';
   char *cp=&ch;
    printf("%d\n%d",a,p);
     printf("\n%d",*p);
     printf("\nThis is char:%c\n%d\n%d",ch,cp,&cp);
     printf("\n%c",*cp);
    return 0;
}
