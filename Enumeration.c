#include<stdio.h>
#include<conio.h>

enum days{sun=1,mon,tue,wed,thurs,fri,sat};

int main()
{
    enum days d;
    d=sun;
    printf("this is address of d:%d this is value:%d",&d,d);
    return 0;

}
