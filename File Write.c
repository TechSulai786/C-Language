#include<stdio.h>
#include<conio.h>
int main ()
{
   // char ch;
    FILE *fp;
    fp=fopen("tech.txt","w");
    if(fp==NULL)
    {
        printf("\nFile cant Open or File Not Found:");
    }
    else {
        printf("\nFile Found:");
    }

   // fprintf(fp,"\nTHis is first time text:");
    fputc('n',fp);
   // fgetc(fp);

    fclose(fp);


    return 0;
}
