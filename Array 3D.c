#include<stdio.h>
#include<conio.h>
int main()
{
int arr[2][3][5]={
                  {{1,2,3,4,5},
                  {7,6,6,7,7},
                  {6,7,8,9,8}}, {
                                {8,6,4,7,4},
                                {2,6,7,8,5},
                                {3,5,4,6,7}
                                           }};
   arr[1][1][2];

 printf("%d",arr[1][1][2]);
 return 0;
}
