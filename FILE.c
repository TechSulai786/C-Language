#include<stdio.h>
#include<conio.h>
int main ()
{
    FILE *fp;
    char ch;
    fp=fopen("tech.txt","r");
    if(fp==NULL)
    {
        printf("\nFile cant Open or File Not Found:");
    }
    else
    {
        printf("\nFile Found:");
    }

    ch=fgetc(fp);

    fclose(fp);
    printf("\n %c",ch);




    return 0;
}
