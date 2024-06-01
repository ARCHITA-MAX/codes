#include <stdio.h>
struct Car 
{
    int carID;
    char model[50];
    float RatePerDay;
};
int main()
{
    int n,i,days;
    float totalCost=0.0;
    printf("\t\t*****INPUT*****\n");
    printf("Enter the number of cars ");
    scanf("%d",&n);
    struct Car cars[n];
    for(i=0;i<n;i++) 
    {
        printf("\nEnter details for Car %d\n",i + 1);
        printf("Car ID ");
        scanf("%d",&cars[i].carID);
        printf("Model ");
        scanf("%s",cars[i].model); 
        printf("Rental rate per day ");
        scanf("%f",&cars[i].RatePerDay);
    }
    printf("\nEnter the number of days for rental ");
    scanf("%d",&days);
    for(i=0;i<n;i++) 
    {
        totalCost +=cars[i].RatePerDay*days;
    }
    printf("\t\t*****OUTPUT*****\n");
    printf("\nTotal rental cost for %d days\n",days);
    printf("Total Cost %f\n",totalCost);
    return 0;
}
