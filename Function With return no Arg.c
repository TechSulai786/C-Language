#include<stdio.h>
#include<conio.h>
float func();
int main()
{

 float ff;
 ff=func();
    printf("this is you entered:%f",ff);





    return 0;
}
 float func()
 {
     float f;
    printf("Enter the number:");
    scanf("%f",&f);
    return f;

 }
