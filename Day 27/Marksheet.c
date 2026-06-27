#include<stdio.h>
int main()
{
    char name[50];
    int roll;
    float m1, m2, m3, total, percentage;

    printf("Enter Student Name: ");
    scanf("%s",&name);
    printf("Enter Roll Number: ");
    scanf("%d",&roll);
    printf("Enter Marks OF Subjects\n");
    printf("M!= ");
    scanf("%f",&m1);
    printf("M2= ");
    scanf("%f",&m2);
    printf("M3: ");
    scanf("%f",&m3);

    total= m1+ m2+ m3;
    percentage= total/3;

    printf("\n-----Marksheet-----\n");
    printf("Name: %s\n",name);
    printf("Roll Number: %d\n",roll);
    printf("Subject 1: %.2f\n",m1);
    printf("Subject 2: %.2f\n",m2);
    printf("Subject 3: %.2f\n",m3);
    printf("Total:%.2f\n ",total);
    printf("Percentage:%.2f\n",percentage);

    if(percentage >= 40)
    printf("Result Pass\n");
    else
    printf("Result Fail\n");

    return 0;

}