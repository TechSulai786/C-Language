#include<stdio.h>

int main()
{
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d", strlen(alphabet));
    printf("\n%d", sizeof(alphabet));

    char str1[20] = "Hello ";
    char str2[] = "World!";

// Concatenate str2 to str1 (result is stored in str1)
    strcat(str1, str2);

// Print str1
    printf("\n%s", str1);

    char str3[20] = "Hello World! sulai";
    char str4[20];

// Copy str1 to str2
    strcpy(str4, str3);

// Print str2
    printf("\n%s", str4);


    return 0;

}
