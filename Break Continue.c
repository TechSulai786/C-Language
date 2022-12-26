#include<stdio.h>
#include<conio.h>
int main()
{

    int i;
    for(i=1;i<=10;i++)
    {
        if(i==9)
        {
            break;
        }
        printf("%d",i);
    }
    printf("\n");
    int j;
    for(j=1;j<=10;j++)
    {
        if(j==8)
        {
            continue;

        }
         printf("%d",j);
    }
}
