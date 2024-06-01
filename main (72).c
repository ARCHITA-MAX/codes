/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
struct student
{
    int rn;
    char s;
    char nm[50];
    float m;
};
void input_students(struct student *s)
{
    printf("enter roll no");
    scanf("%d",&s->rn);
    printf("enter section");
    scanf(" %c",&s->s);
    printf("enter name");
    scanf("%s",&s->nm);
    printf("enter marks");
    scanf("%f",&s->m);
}
void print_students(const struct student *s)
{
    printf("roll no=%d",s->rn);
    printf("section=%c",s->s);
    printf("name=%s",s->nm);
    printf("marks=%f",s->m);
}
int main()
{
    struct student static_student[3];
    printf("enter the detail of 3 students");
    for(int i=0;i<3;i++)
    {
        printf("student%d:",i+1);
        input_students(&static_student[i]);
    }
    printf("static student record");
    for(int i=0;i<3;i++)
    {
        printf("student%d:",i+1);
        print_students(&static_student[i]);
    }
    struct student *dynamic_student=(struct student *)malloc(3*sizeof(struct student));
    printf("enter the detail of 3 students");
    for(int i=0;i<3;i++)
    {
        printf("student%d:",i+1);
        input_students(&dynamic_student[i]);
    }
    printf("static student record");
    for(int i=0;i<3;i++)
    {
        printf("student%d:",i+1);
        print_students(&dynamic_student[i]);
    }
    free(dynamic_student);
    return 0;
}