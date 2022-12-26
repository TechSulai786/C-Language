#include<stdio.h>
#include<conio.h>
void func();
int main()
{
    func();
func();
func();
}

void func()
{
 static int i=10;
 i++;
 printf("\n%d",i);

}
