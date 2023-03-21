#include<stdio.h>
#include<conio.h>
void func(int x);
int main()
{
    func(20);
    return 0;
}


void func(int x)
{
    for(int i=1;i<=x;i++)
    {
        printf("*");
    }
}
