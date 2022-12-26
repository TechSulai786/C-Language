#include<stdio.h>
#include<conio.h>
int main ()
{
   // char ch;
    FILE *fp;
    fp=fopen("tech.txt","a");
    if(fp==NULL)
    {
        printf("\nFile cant Open or File Not Found:");
    }
    else {
        printf("\nFile Found:");
    }
    fprintf(fp,"\nAddition:");
    fclose(fp);
    return 0;
}
