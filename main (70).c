#include <stdio.h>
struct Student 
{
    int rn;
    char nm[50];
    char dep[50];
    char cr[50];
    int yoj;
};
void printStudentsByYear(struct Student students[],int size,int year)
{
    printf("Students who joined in %d\n",year);
    int found = 0;
    for(int i=0;i<size;i++) 
    {
        if(students[i].yoj == year)
        {
            printf("%s\n",students[i].nm);
            found=1;
        }
    }
    if(!found)
    printf("No students joined in %d.\n", year);
}
void printStudentByRollNumber(struct Student students[],int size,int rn)
{
    int found=0;
    for (int i=0;i<size;i++)
    {
        if(students[i].rn == rn) {
            printf("Student Data for Roll Number %d\n", rn);
            printf("Name %s\n",students[i].nm);
            printf("Department %s\n",students[i].dep);
            printf("Course %s\n",students[i].cr);
            printf("Year of Joining %d\n",students[i].yoj);
            found=1;
            break;
        }
    }
    if(!found)
    printf("Student with Roll Number %d not found\n",rn);
}
int main()
{
    int n;
    printf("\t\t*****INPUT*****\n");
    printf("Enter the number of students ");
    scanf("%d",&n);
    struct Student students[n];
    for(int i=0;i<n;i++)
    {
        printf("\nEnter details for Student %d\n",i + 1);
        printf("Roll Number ");
        scanf("%d",&students[i].rn);
        printf("Name ");
        scanf("%s",students[i].nm);
        printf("Department ");
        scanf("%s",students[i].dep);
        printf("Course ");
        scanf("%s",students[i].cr);
        printf("Year of Joining ");
        scanf("%d",&students[i].yoj);
    }
    printf("\t\t*****OUTPUT*****\n");
    int yos=2022;
    printf("\n");
    printStudentsByYear(students,n,yos);
    int nts=101;
    printf("\n");
    printStudentByRollNumber(students,n,nts);
    return 0;
}
