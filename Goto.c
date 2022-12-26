#include<stdio.h>
#include<conio.h>
int main()
{


    int i,j,k=0;
    loops:
    printf("Enter the number:");
    scanf("%d %d",&i,&j);
    printf("\n%d",i+j);
    k++;
    if(k<3)
    {
    goto loops;
    }

}

