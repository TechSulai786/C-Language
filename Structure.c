#include<stdio.h>
#include<conio.h>

int main()
{
    struct student
    {
    char name[10];
    int age;
    int marks;
    };



    struct student s1;
    struct student s2={"sulai",25,100};
    printf("Enter the name,age,marks:");
    scanf("%s %d %d",&s1.name,&s1.age,&s1.marks);
    printf("\nName is :%s ",s1.name);
    printf("\nAge is : %d",s1.age);
    printf("\nMarks is :%d",s1.marks);
    printf("\n This is bytes:%d",sizeof(s1));
    printf("\nthis is s2:%s %d %d",s2.name,s2.age,s2.marks);

    return 0;
}
