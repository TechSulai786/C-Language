#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,max;
    printf("Enter the Number:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c)
    {
        max=a;
printf("max is %d",max);
    }
    else if(b>=a && b>=c)
    {
        max=b;
        printf("max is %d",max);
    }
    else{
        max=c;
        printf("Max is %d",max);
    }
}
